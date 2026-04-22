int b, c; // Variables globales, file scope, en todo el archivo, duracion estatica.

void f(void) 
{
    int b, d; // Variables locales, block scope, dentro de f, duracion automatica.
}

void g(int a) 
{
    int c; // Variable local, block scope, dentro de g, duracion automatica.
    {
        int a, b; // Variables locales, block scope, dentro del sub bloque, duracion automatica
    }
}