
typedef struct {

    char nombre[50];
    int edad;
    int dni;
    int estado;


}EPersona;

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona lista[]);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[], int dni);

void altaDePersona(EPersona datos[], int);
void bajaDePersona(EPersona datos[], int);
void listarPersonas(EPersona datos[], int);
void graficarPersonas(EPersona datos[], int);