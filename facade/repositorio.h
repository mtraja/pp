#ifndef REPOSITORIO_H
#define REPOSITORIO_H


#include <QtSql>
#include <QString>
#include <QDebug>
#include <list>
#include "aluno.h"


class Repositorio
{
public:
    Repositorio();
    ~Repositorio();
    void persistir(std::string nome,std::string matricula, double nota, int disciplina);
    std::list<std::string> obterAluno(std::string);
private:
    QSqlDatabase* connect( const QString& server,
                           const QString& databaseName,
                           const QString& userName,
                           const QString& password );
    void disConnect();

    bool executeQuery(QSqlQuery* query);

    QSqlDatabase* db;

};

#endif // REPOSITORIO_H
