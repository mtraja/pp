#ifndef _LIVRO_HPP_
#define _LIVRO_HPP_
class Livro {
    private:
        string titulo;
        string isbn;
        string autoria;

    public:
        Livro(string titulo);
        Livro(string titulo, string isbn);
        ~Livro();
}

#endif