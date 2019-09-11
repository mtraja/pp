#include "arquivowx.h"


ArquivoWx::ArquivoWx(string nome)
:Arquivo(nome)
{
    wf = new wxTextFile(nome);  
    
}

ArquivoWx::~ArquivoWx(){
    delete wf;
}

void ArquivoWx::abrir() {
  if (wf->Exists()) { 
      wf->Open();
  } else { 
     wf->Create();
  }
}

void ArquivoWx::fechar(){
    wf->Close();
}

 const list<string> ArquivoWx::lerLinhas(){ 
    abrir();   
    wxString texto;
    list<string> textos;
    for ( texto = wf->GetFirstLine(); !wf->Eof(); texto = wf->GetNextLine() )
    {
        textos.push_back(texto.ToStdString());
    }
    fechar();
    
    return textos;
}

void ArquivoWx::salvarLinhas(const list<string>& linhas){
    abrir();
    for(auto linha:linhas) {
        wf->AddLine(linha);
        wf->Write();
    }
    fechar();
}

void ArquivoWx::iniciar(){

}
