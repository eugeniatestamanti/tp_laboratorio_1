
typedef struct {

    char nombre[50];
    int edad;
    int dni;
    int estado;


}EPersona;

/**
* Ingresa nuevo usuario.
* @param datos, el array se pasa como parametro.
* @param int, recibe como entero a la cantidad de usuarios.
* @return no devuelve nada. El usuario queda ingresado en los indices correspondientes.
*/
void altaDePersona(EPersona datos[], int);

/**
* Da la baja logica a un usuario.
* @param datos, el array se pasa como parametro.
* @param int, recibe como entero a la cantidad de usuarios.
* @return no devuelve nada. El usuario queda borrado de manera logica asignandole un 0.
*/
void bajaDePersona(EPersona datos[], int);

/**
* Lista alfabeticamente a los usuarios.
* @param datos, el array se pasa como parametro.
* @param int, recibe como entero a la cantidad de usuarios.
* @return no devuelve nada. Se ordenan los usuarios usando una variable auxiliar.
*/
void listarPersonas(EPersona datos[], int);

/**
* Realiza un codigo de barras segun las edades de los usuarios.
* @param datos, el array se pasa como parametro.
* @param int, recibe como entero a la cantidad de usuarios.
* @return no devuelve nada. Se muestra el grafico por edades.
*/
void graficarPersonas(EPersona datos[], int);
