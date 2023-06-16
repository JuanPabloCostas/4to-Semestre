<!-- # ED_JuanPabloCostas_MenuPilasDinamicas -->
# Metodos de Acceso y Tabla Comparativa

![alt](https://randomwordgenerator.com/img/picture-generator/57e2d64a4d50a814f1dc8460962e33791c3ad6e04e507441722a72dd9f4dc1_640.jpg)

- Universidad Autónoma De Querétaro
- Facultad de informática
<!-- - Estructura de datos
- M.I.S.D. Erika del Río Magaña -->

<!-- markdownlint-disable-line MD000 -->

- Costas Rueda Juan Pablo
- EXP: 307081
- 4to Semestre

## Tabla de metodos de acceso

| Metodo | Solo Escritura | Solo Lectura | Escritura y Lectura | Trunca a 0 | Si no existe el doc, lo crea| Marca error si el doc no existe | Marca error si el doc existe |
|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
|r          |           |     X      |           |           |           |   X        |           |
| r+        |           |           |     X      |           |           |    X       |           |
|  w        |    X       |           |           |      X     |     X      |           |           |
|  w+       |           |           |      X     |     X      |     X      |           |           |
|  a        |     X      |           |           |           |     X      |           |           |
|  a+       |           |           |     X      |           |     X      |           |           |
|  x        |      X     |           |           |           |      X     |           |     X      |
|  x+       |           |           |     X      |           |    X       |           |       X    |

----------

## Tabla Comparativa

|          | SMBD SQL  | Archivos
|----------|-------------|-------------|
| Seguridad | Requiere credenciales para desencriptar la informacion, asi que mientras tengas bien protegidas esas credenciales, la informacion se mantendra segura | La informacion esta almacenada en texto plano, y no esta encriptada ni protegida, asi que si tu sistema se encuentra en una pocision vulnerable, es facil acceder a la informacion.
| Escritura y Lectura | Es muy dificil ingresar o recuperar informacion de un SMBD SQL, hay que seguir las reglas semanticas y sintaticas, hay que escribir las relaciones, seguir los tipo de dato, etc. | Es muy facil la escritura y lectura de archivos, hay muy pocas reglas y es intuitivo con la tabla de metodos, el detealle es qu entre mas cresca la cantidad de registros se vuelve expotencialmente mas dificil administrar toda la informacion. |
| En que utilizar cada uno? |Es recomendado ser utilizado en todo tipo de proyectos, expeto en casos donde la conecion a internet es muy inestable o nula, ahi seria recomendable un metodo hibrido.| Se recomienda utilizar en conjunto con el SMBD para almacenar informacion de baja importancia, como almacenar la configuracion de preferencia del usuario|.

En conclucion, cada uno tiene sus ventajas y desventajas, asi que lo ideal es seleccionar que modelo utilizar segun la necediad que haya.
