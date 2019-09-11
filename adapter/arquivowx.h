#ifndef ARQUIVOWX_H
#define ARQUIVOWX_H
#include "arquivo.h"
#include <wx/textfile.h>


class ArquivoWx : public Arquivo
{
public:
    ArquivoWx(string);
    ~ArquivoWx();
    void abrir();
    void fechar();
    const list<string> lerLinhas();
    void salvarLinhas(const list<string>&);
    void iniciar();
private:
    wxTextFile *wf;
    

};
#endif // ARQUIVOWX_H
