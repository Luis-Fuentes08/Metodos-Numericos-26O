#Tarea 1: Introduccion a los Metodos Numericos y Entorno de Trabajo

**Metodos Numericos CLAVE:1151039**

**Trimestre 26-O**

**Licenciatura:** Ingenieria mecanica 

**Alumno:**Fuentes Bayona Luis Fernando 2243038451

**Profesor:**M. en C. Gabriel Hurtado Avilés

**Fecha:**10-Octubre-2026

¿Que son los metodos Numericos?
Los metodos numericos  son tecnicas que permiten formular problemas de tal forma uqe se peudan resolver utilizancion operaciones aritmeticas.
Todos los tipos de metodos numericos requieren de realizar muchas operaciones aritmeticas, estos son capaces de resolver muchos tpos de problemas
commo pueden ser: sistemas de ecuaciones no lneales y geometricas que sean demasiado extensas.

¿Comá se aplican los metodos numericos en ingenieria mecanica?
En la Carrera de licenciatura en Ingeniera Mecánica son importantes ya que se utilizan para poder analizar diversos problemas físicos donde existen varias variables (Chapra & Canale, 5ª edición) algunos tipos de estos problemas son:

•	Sistemas Masa-Resorte:

Los desplazamientos en distintas posiciones cuando esta sometido a una fuerza de compresión o a una carga externa
Cuando se realiza un balance de las fuerzas en cada punto, esto tiene como resultado un sistema de ecuaciones lineales y conforme va aumentando el numero de resortes o elementos en el sistema mecánico, resolver el sistema de ecuaciones de forma manual se vuelve difícil de resolver, por lo que utilizar métodos numéricos de algebra lineal para encontrar su posición de equilibrio se vuelve más práctico.

•	Sistemas en planos inclinados y movimientos:

Para este tipo de problemas, se requiere calcular las aceleraciones y tensiones en las cuerdas que están conectadas en diferentes bloques o en componentes mecánicos sobre alguna superficie inclinadas y con fricción.
Cuando se tiene una interacción con varios tipos de cuerpos, genera como resultado sistemas de ecuaciones diferenciales o algebraicas  y cuando a estas se les incorpora efectos reales como coeficientes de fricción o fuerzas externas que dependen del tiempo, las soluciones analíticas de forma directa no existen , por lo que se usan los métodos numéricos para poder simular el comportamiento del sistema 

**Herramientas que se utilizan en los metodos numericos**

Con el fin de poder capacitar a los estudiantes, enseña a resolver problemas con paquetes como EXCEL y MATLAB, al igual se les enseña a los estudiantes a ser capaces de desarrollar programas sencillos y bien estructurados para manejar correctamente estos ambientes , esto les permite programar en lenguajes como Fortran 90, C y C++, actualmente también se suelen utilizar macros o archivos M (Chapra & Canale, 5ª edición)

**Herramientas que se utilizan en este curso**

•	Docker: Es una plataforma abierta que sirve para desarrollar, enviar y ejecutar aplicaciones en entornos aislados llamados contenedores, con ella se garantiza que las aplicaciones funcionen igual que en cualquier otro entorno.

•	Docker frente a una máquina virtual: Docker al utilizar contenedores comparte núcleos con la maquina anfitriona, arranca de manera más rápida y ocupa megabytes, a diferencia de una maquina virtual que tiene su sistema operativo, tarda más en arrancar y ocupa gigabytes

•	Componentes y comandos de Docker:

Para poder administrar nuestro entorno es necesario utilizar Dockerfile ya que este declara al archivo que se utilizara:

-compose.yaml: es la lista de instrucciones que indica como arrancará el contenedor

-up-d: levanta y ejecuta los contenedores

-exec: permite ejecutar comandos dentro del contenedor 

-stop: apaga o detiene el contenedor manteniendo su información intacta

-downs: Detiene y elimina por completo el contenedor 

-ps: muestra el estado del contenedor ejecutado

-logs: muestra las salidas del contenedor 

•	Diferencia entre apagar y borrar un contenedor:
Apagar un contenedor, detiene por completo la ejecución de su proceso, pero conserva todos sus archivos y estructura para poder iniciar y usar. A diferencia de borrar un contenedor, este destruye el contenedor, por lo que si se quiere volver a usar es necesario volver a construirlo

•	GNU Octave: es un lenguaje matricial, similar a MATLAB, sirve para entender lo que se está haciendo

•	Python: Se utiliza para comprobar los resultados y poder generar las figuras e los reportes

•	C con GCC: es un lenguaje de programación compilado, obliga a declarar los tipos, decidir la tolerancia y reservar la memoria
<img width="1617" height="837" alt="01-up" src="https://github.com/user-attachments/assets/00fb0bb6-4b3f-4df9-b275-7d6b427d5cf9" />





<img width="1556" height="473" alt="02-ps" src="https://github.com/user-attachments/assets/10b2e911-8fce-44b8-8507-0fdc11a804fd" />
<img width="1552" height="557" alt="03- versiones" src="https://github.com/user-attachments/assets/bdc52400-84f3-46a2-b43a-932bf05d058d" />
<img width="1607" height="715" alt="04-docker-deskop" src="https://github.com/user-attachments/assets/69ab3ba6-9e90-41ef-a074-1e6b47d4369d" />
<img width="1392" height="698" alt="05-" src="https://github.com/user-attachments/assets/f06a899f-1cf6-4a7c-8f51-aa9c0c98332c" />
<img width="1631" height="631" alt="05-programas" src="https://github.com/user-attachments/assets/45c698d4-319c-475c-98ce-013f5376cc30" />


para compilar los programas 

suma.c

**gcc suma -o suma**

**./suma**

suma.py

**python3 suma.py**

suma.m

**octave  suma.m**

calculadora.c

gcc calculadora.c -o

./calculadora








REFERENCIAS


**Chapra, S. C., & Canale, R. P. (2015). Métodos Numéricos para Ingenieros (7a ed.). McGraw-Hill.**

**Chapra, S., & Canale, R. (2007). Métodos númericos para ingenieros. México: McGrawHill.**


