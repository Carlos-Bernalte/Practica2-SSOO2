# Practica2-SSOO2


Carlos Bernalte García-Junco <carlos.bernalte@alu.uclm.es>
## Estructura de datos escogida
Para el almacenamiento de datos que comparten todos los hilos he decidido utilizar un std::map ya que me da la posibilidad de asociar un identificador (id del hilo) a un valor (un vector de palabras encontradas) y como el id de los hilos esta asignado de manera ordenarda incrementalmente, a la hora de representarlos sandran en orden las ocurrencias encontradas.

## Compilación y ejecución del código

Para la compilación automática de todos los programas .cpp ubicado en la carpeta src llamaremos al regla all del archivo Makefile:
```sh
$ make all
```
Para probar el código con ejemplos de prueba se podran llamar a test, test2 y test3:
```sh
$ make test
$ make test2
$ make test3
```
Si queremos limpiar el entorno de trabajo podremos llamar a la regla clean:
```sh
$ make clean
```
