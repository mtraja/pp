#include "repositorio.h"

Repositorio::Repositorio()
{
    db = new QSqlDatabase( QSqlDatabase::addDatabase("QPSQL"));
    connect("localhost", "escola", "trajano", "db424956");
}

Repositorio::~Repositorio()
{
    qDebug() << " Desconecando ... !";
    disConnect();
    delete db;
}

QSqlDatabase* Repositorio::connect( const QString& server,
                                     const QString& databaseName,
                                     const QString& userName,
                                     const QString& password )
{
    db->setConnectOptions();
    db->setHostName(server);
    db->setDatabaseName(databaseName);
    db->setUserName(userName);
    db->setPassword(password);
    return db;
}


bool Repositorio::executeQuery(QSqlQuery* query)
{
    db->transaction();
    bool queryRes = query->exec();
    if (query->lastError().type() != QSqlError::NoError || !queryRes)
    {
        qDebug() << query->lastError().text();
        db->rollback();
        return false;
    }
    db->commit();
    return true;
}

void Repositorio::persistir(std::string nome,std::string matricula, double nota, int disciplina)
{
    if(db->open()) {
      QSqlQuery* query = new QSqlQuery(*db);
      query->setForwardOnly(true);

       if( !query->prepare(
      QString("INSERT INTO aluno( nome, matricula, nota, disciplina) VALUES (?, ?, ?, ?)") ))
      {
          qDebug() <<"Algo deu Errado = " << db->lastError().text();
      }
      else
      {
          query->addBindValue(QString::fromStdString(nome));
          query->addBindValue(QString::fromStdString(matricula));
          query->addBindValue(nota);
          query->addBindValue(disciplina);
      }

      bool result = executeQuery(query);
      if( result )
          qDebug() << "Insercao com Sucesso! ";
      else
          qDebug() << "Insercao falhou";

      delete query;
    }

}

// bool preparedQuery(const QString sql,

std::list<std::string> Repositorio::obterAluno(std::string matricula)
{
    std::list<std::string> lista;
    if(db->open()) {
      QSqlQuery* query = new QSqlQuery(*db);
      if( !query->prepare(
      QString("SELECT nome, matricula, nota, disciplina from aluno where matricula = ? ")))
      {
        qDebug() <<"Error = " << db->lastError().text();
      }
      else {
        query->addBindValue(QString::fromStdString(matricula));

     }
     executeQuery(query);
      while (query->next()) {
        lista.push_back(query->value(0).toString().toStdString());
        lista.push_back(query->value(1).toString().toStdString());
        lista.push_back(query->value(2).toString().toStdString());
        lista.push_back(query->value(3).toString().toStdString());
     }
      delete query;
    }
    return lista;
}

void Repositorio::disConnect()
{
    qDebug() << "Fechando o Repositorio!";
    db->close();
}

