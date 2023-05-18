# Guía para el segundo examen de Análisis y Desarrollo de software

## Unidad 3

## Técnicas para el análisis de los requerimientos

### Descomposición Funcional

La descomposición funcional es un enfoque utilizado en la planificación y desarrollo de proyectos de software. Consiste en dividir un sistema complejo en funciones o componentes más pequeños y manejables, de manera que el desarrollo del proyecto sea más fácil y organizado. Este enfoque también facilita la asignación de tareas a los miembros del equipo de desarrollo y ayuda a asegurar que todos los aspectos del sistema se aborden de manera adecuada.

A continuación, te describo algunos de los aspectos clave de la descomposición funcional en el contexto del desarrollo de proyectos de software:

- **Identificación de funciones:** El primer paso en la descomposición funcional es identificar las funciones o características que el software debe proporcionar. Estas funciones pueden incluir la entrada y salida de datos, procesamiento y cálculo, almacenamiento, comunicación, visualización, entre otros.
<!-- markdownlint-disable MD000 -->
- **Desglose de funciones:** Una vez identificadas las funciones, se descomponen en subfunciones o componentes más pequeños. Cada subfunción debe ser lo suficientemente simple como para ser comprendida y desarrollada de manera independiente. Este proceso se realiza de manera recursiva hasta que todas las funciones se hayan desglosado en componentes manejables.
<!-- markdownlint-disable MD000 -->
- **Interdependencia de funciones:** Es fundamental entender las interacciones entre las diferentes funciones y subfunciones. Esto incluye las dependencias entre componentes y cómo se comunican entre sí. Establecer la interdependencia ayuda a garantizar la correcta integración de las funciones y la cohesión del sistema completo.
<!-- markdownlint-disable MD000 -->
- **Asignación de responsabilidades:** Con las funciones y subfunciones identificadas, se asignan responsabilidades a los miembros del equipo de desarrollo. Esto puede implicar asignar un componente o grupo de componentes a un desarrollador o equipo de desarrolladores. La asignación de responsabilidades asegura que cada función esté cubierta y evita la duplicación de esfuerzos.
<!-- markdownlint-disable MD000 -->
- **Desarrollo e integración:** Después de la descomposición funcional y la asignación de responsabilidades, el equipo de desarrollo trabaja en cada componente de manera individual. Una vez que se completa el desarrollo de los componentes, se integran para formar el sistema completo. La descomposición funcional facilita la integración, ya que cada función ha sido diseñada para funcionar de manera independiente.
<!-- markdownlint-disable MD000 -->
- **Mantenimiento y escalabilidad:** La descomposición funcional también facilita el mantenimiento y la escalabilidad del software. Dado que cada función se ha desarrollado de manera independiente, es más fácil actualizar o modificar un componente sin afectar al sistema en su totalidad.

> En resumen, la descomposición funcional es un enfoque que facilita el desarrollo de proyectos de software al dividirlos en componentes más pequeños y manejables. Permite una mejor organización, asignación de tareas, integración y mantenimiento del sistema, lo que conduce a un software de mayor calidad y eficiencia.

----------

### Especificación vía sentencias textuales

La especificación a través de sentencias textuales es un método comúnmente utilizado en la fase de análisis de requisitos del desarrollo de software. **Consiste en describir, mediante el uso de lenguaje natural (es decir, un lenguaje humano como el español o el inglés), los requerimientos, funciones, comportamientos y características que se esperan del sistema de software a desarrollar.**

**El objetivo de las sentencias textuales es definir claramente qué se espera que haga el sistema de una manera que sea comprensible tanto para los stakeholders (clientes, usuarios finales, etc.) como para el equipo de desarrollo.**

A continuación, se detallan algunos de los aspectos más importantes a considerar en la especificación a través de sentencias textuales:

- **Claridad y precisión:** Las sentencias deben ser claras y precisas. Deben evitar la ambigüedad y proporcionar suficiente detalle para que cualquier lector pueda comprender las expectativas y comportamientos del sistema. Por ejemplo, una sentencia como "El sistema debe ser rápido" es ambigua, porque "rápido" puede tener diferentes significados para diferentes personas. En cambio, "El sistema debe responder a todas las solicitudes de los usuarios en menos de 2 segundos" es una sentencia mucho más clara y precisa.
<!-- markdownlint-disable-line MD000 -->
- **Complejidad y descomposición:** Si la funcionalidad es compleja, puede ser necesario descomponerla en varias sentencias más sencillas para asegurar que todos los aspectos de la funcionalidad se entiendan y se implementen correctamente.
<!-- markdownlint-disable-line MD000 -->
- **Cubrimiento de casos de uso:** Las sentencias textuales deben cubrir todos los casos de uso del sistema. Esto incluye no solo los comportamientos esperados en condiciones normales, sino también cómo debe responder el sistema en situaciones de error o excepcionales.
<!-- markdownlint-disable-line MD000 -->
- **Consistencia:** Las sentencias deben ser consistentes entre sí para evitar confusiones y contradicciones.
<!-- markdownlint-disable-line MD000 -->
- **Validación y revisión:** Las sentencias textuales deben ser validadas y revisadas por todas las partes interesadas para asegurar que representen correctamente las expectativas y necesidades de todos.

Aunque las sentencias textuales pueden ser una forma efectiva de especificar los requisitos de un sistema, también pueden tener desventajas, como el riesgo de ambigüedad y malentendidos debido a la naturaleza del lenguaje natural. Por esta razón, a menudo se utilizan en combinación con otras técnicas de especificación, como los diagramas UML, los modelos de datos y los casos de uso.

----------

### Modelado de procesos

El modelado de procesos en el desarrollo de software es una técnica que se utiliza para representar gráfica o conceptualmente las actividades, tareas y procedimientos que se deben realizar para llevar a cabo una función específica o para completar un proyecto de software.

Un modelo de proceso de software puede ser tan detallado como sea necesario, dependiendo de las necesidades del proyecto. Puede incluir roles, responsabilidades, entradas y salidas de las tareas, flujos de trabajo, eventos, reglas de negocio, y más. El objetivo es tener una representación visual o conceptual que facilite la comprensión de cómo se llevará a cabo el proyecto o cómo funciona un sistema o una parte de él.

A continuación, se describen algunas de las características más importantes del modelado de procesos en el contexto del desarrollo de software:

- **Procesos y Subprocesos:** Los procesos son conjuntos de tareas relacionadas que se llevan a cabo para lograr un objetivo específico. Por ejemplo, el proceso de desarrollo de software puede incluir subprocesos como el análisis de requisitos, el diseño, la implementación, las pruebas y el mantenimiento. Cada uno de estos subprocesos puede ser modelado a su vez como un conjunto de tareas más detalladas.
<!-- markdownlint-disable MD000 -->
- **Actividades:** Las actividades son las tareas individuales que se realizan en el marco de un proceso. Cada actividad puede tener una entrada, una salida, precondiciones y poscondiciones.
<!-- markdownlint-disable MD000 -->
- **Roles y Responsabilidades:** En el modelo de proceso, también se definen los roles y responsabilidades de las personas o equipos que llevan a cabo las diferentes actividades. Por ejemplo, los analistas de sistemas pueden ser responsables de recopilar y documentar los requisitos, mientras que los desarrolladores pueden ser responsables de la implementación de esos requisitos.
<!-- markdownlint-disable MD000 -->
- **Secuencia y Flujo de Trabajo:** El modelo de proceso también debe representar la secuencia de las actividades, es decir, el orden en el que se deben realizar. Esto puede incluir flujos de trabajo lineales, flujos paralelos (donde varias actividades pueden realizarse simultáneamente) y flujos condicionales (donde la secuencia de actividades depende de ciertas condiciones).
<!-- markdownlint-disable MD000 -->
- **Eventos:** Los eventos son situaciones que pueden ocurrir durante el proceso y que pueden afectar la secuencia de las actividades. Por ejemplo, el descubrimiento de un error en una etapa de pruebas puede desencadenar una serie de actividades para corregir el error y verificar la solución.

El modelado de procesos es una herramienta esencial en el desarrollo de software, ya que ayuda a los equipos a entender y organizar el trabajo que necesitan realizar. También facilita la comunicación entre los miembros del equipo y con los stakeholders, y puede ser una herramienta valiosa para la gestión de proyectos y la mejora de procesos.

----------

### Modelado de dominio

El modelado de dominio es una representación visual del mundo real en un área específica o "dominio" que está siendo tratada en un sistema de software. En otras palabras, es un modelo que representa las principales clases o conceptos, los atributos, las relaciones y las interacciones que existen en el dominio del problema.

Este tipo de modelado es una técnica esencial en el desarrollo de software orientado a objetos, ya que proporciona una comprensión estructurada del problema y sirve como base para la identificación y diseño de las clases de objetos en el sistema de software.

A continuación, se detallan algunos de los aspectos clave del modelado de dominio:

- **Clases o Conceptos:** Estos representan las entidades o cosas importantes en el dominio del problema. Por ejemplo, en un sistema de software para una tienda en línea, las clases o conceptos podrían incluir "Producto", "Cliente", "Pedido", "Carrito de Compras", etc.
<!-- markdownlint-disable MD000 -->
- **Atributos:** Los atributos son características o propiedades que describen las clases o conceptos. Por ejemplo, la clase "Producto" podría tener atributos como "nombre", "precio", "descripción", "stock", etc.
<!-- markdownlint-disable MD000 -->
- **Relaciones:** Las relaciones representan cómo las diferentes clases o conceptos están conectados o interactúan entre sí. Por ejemplo, un "Cliente" podría tener una relación "ha realizado" con un "Pedido", y un "Pedido" podría tener una relación "contiene" con "Producto".
<!-- markdownlint-disable MD000 -->
- **Responsabilidades:** Algunos modelos de dominio también pueden incluir las responsabilidades de las diferentes clases, es decir, qué se espera que hagan o qué operaciones pueden realizar.
<!-- markdownlint-disable MD000 -->
El modelado de dominio suele ser una actividad colaborativa que involucra a analistas, diseñadores, desarrolladores y stakeholders. El objetivo es asegurar que todos tengan la misma comprensión del dominio del problema y de cómo se reflejará en el sistema de software.

Una herramienta comúnmente utilizada en el modelado de dominio es el Lenguaje Unificado de Modelado (UML), que proporciona una notación estándar para representar las clases, atributos, relaciones y otros aspectos del dominio.

En resumen, el modelado de dominio es una técnica esencial en el desarrollo de software que ayuda a entender y representar el dominio del problema de manera estructurada, facilitando así el diseño y la implementación del sistema de software.

----------

### Casos de Uso

Un caso de uso es una técnica utilizada en el desarrollo de software para capturar los requerimientos funcionales de un sistema. Representa una serie de acciones o pasos que se llevan a cabo para completar un objetivo específico del usuario o de otro sistema.

Un caso de uso se define desde el punto de vista del actor, que puede ser un usuario humano, un sistema externo, o cualquier otro ente que interactúe con el sistema. En otras palabras, describe lo que el sistema debe hacer en respuesta a una acción específica de un actor.

Un caso de uso generalmente incluye los siguientes elementos:

- **Nombre del caso de uso:** Un nombre breve y descriptivo que indica la finalidad del caso de uso.
<!-- markdownlint-disable MD000 -->
- **Actor:** El usuario o sistema que interactúa con el caso de uso.
<!-- markdownlint-disable MD000 -->
- **Precondiciones:** Las condiciones que deben ser verdaderas antes de que se pueda iniciar el caso de uso.
<!-- markdownlint-disable MD000 -->
- **Flujo principal (o camino feliz):** La secuencia normal de eventos que se lleva a cabo para completar el caso de uso exitosamente. Esto se describe como una serie de pasos, cada uno de los cuales indica una acción del actor o una respuesta del sistema.
<!-- markdownlint-disable MD000 -->
- **Flujos alternativos (o excepcionales):** Secuencias alternativas que pueden ocurrir en respuesta a ciertas condiciones o eventos. Estos flujos representan variaciones en el comportamiento del sistema, por ejemplo, en caso de errores, excepciones, o decisiones del usuario.
<!-- markdownlint-disable MD000 -->
- **Poscondiciones:** Las condiciones que se esperan sean verdaderas una vez que se ha completado el caso de uso.

Los casos de uso pueden ser documentados en forma textual, pero también se suelen representar visualmente mediante diagramas de casos de uso, que son una herramienta del Lenguaje Unificado de Modelado (UML). Estos diagramas muestran los actores, los casos de uso y las interacciones entre ellos.

En el contexto del desarrollo de software, los casos de uso son valiosos porque ayudan a definir claramente lo que el sistema debe hacer, desde la perspectiva de los usuarios y otros actores. Esto puede facilitar la comunicación entre los stakeholders y el equipo de desarrollo, ayudar a definir las pruebas del sistema, y proporcionar una base para la planificación y el diseño del sistema.

----------

### Checklist

Un checklist de requerimientos, también conocido como lista de verificación de requerimientos, es una herramienta que se utiliza en la ingeniería de software para garantizar que todos los requerimientos de un sistema han sido identificados, documentados, y considerados correctamente durante el proceso de desarrollo.

El objetivo de un checklist de requerimientos es ayudar a evitar omisiones o malentendidos que pueden surgir al definir y documentar los requerimientos, y asegurar que todos los requerimientos son claros, completos, coherentes, y tratables.

Aunque el contenido exacto de un checklist de requerimientos puede variar dependiendo de la naturaleza del proyecto y las necesidades específicas del equipo de desarrollo, a continuación se indican algunos elementos que podrían incluirse:

- **Identificación:** Cada requerimiento debe tener un identificador único para facilitar su seguimiento y referencia.
<!-- markdownlint-disable MD000 -->
- **Descripción:** Cada requerimiento debe tener una descripción clara y precisa que explique lo que debe hacer el sistema.
<!-- markdownlint-disable MD000 -->
- **Complejidad:** Debe quedar claro si el requerimiento es simple, moderado o complejo para ayudar a estimar el esfuerzo de implementación.
<!-- markdownlint-disable MD000 -->
- **Prioridad:** Cada requerimiento debe tener una prioridad asignada (por ejemplo, alta, media, baja) para ayudar a planificar el desarrollo.
<!-- markdownlint-disable MD000 -->
- **Origen:** Se debe documentar la fuente o el origen de cada requerimiento, por ejemplo, un stakeholder específico, un documento de especificaciones, una reunión de brainstorming, etc.
<!-- markdownlint-disable MD000 -->
- **Consistencia:** Los requerimientos no deben contradecirse entre sí.
<!-- markdownlint-disable MD000 -->
- **Verificabilidad:** Debe ser posible verificar que cada requerimiento se ha implementado correctamente, por ejemplo, a través de pruebas, revisiones de código, etc.
<!-- markdownlint-disable MD000 -->
- **Viabilidad:** Cada requerimiento debe ser realista y factible de implementar con los recursos y tecnologías disponibles.
<!-- markdownlint-disable MD000 -->
- **Rastreabilidad:** Cada requerimiento debe poder trazarse a los objetivos del negocio o del sistema y a los elementos correspondientes del diseño y del código fuente.

Un checklist de requerimientos puede ser una herramienta valiosa para mejorar la calidad de los requerimientos y, en última instancia, la calidad del sistema de software desarrollado. Sin embargo, es importante recordar que se trata de una herramienta de apoyo y no reemplaza a las habilidades y juicio del analista de requerimientos o del equipo de desarrollo.

----------

### Inspeccion

Una inspección de requerimientos, también conocida como revisión de requerimientos, es un proceso estructurado y formalizado que se utiliza en el desarrollo de software para evaluar la calidad de los requerimientos de un sistema y detectar posibles problemas o errores antes de que se inicie el diseño y la implementación.

La inspección de requerimientos es un tipo de revisión por pares, en la que un equipo de personas (no solo el autor del documento de requerimientos) revisa los requerimientos para verificar su corrección, completitud, coherencia, claridad, trazabilidad, y otros aspectos de calidad.

Las etapas generales de una inspección de requerimientos podrían ser las siguientes:

    - **Planificación:** Se define el alcance de la inspección, se selecciona el equipo de inspección, y se programan las reuniones de inspección.
    <!-- markdownlint-disable MD000 -->
    - **Preparación:** Los miembros del equipo de inspección revisan el documento de requerimientos individualmente para familiarizarse con los requerimientos y prepararse para la reunión de inspección.
    <!-- markdownlint-disable MD000 -->
    - **Reunión de Inspección:** El equipo se reúne para discutir los requerimientos y compartir sus observaciones y preocupaciones. Cada requerimiento se revisa en detalle y se discuten los posibles problemas.
<!-- markdownlint-disable MD000 -->
- **Informe de Inspección:** Se prepara un informe que documenta los resultados de la inspección, incluyendo cualquier problema identificado y las recomendaciones para su resolución.
<!-- markdownlint-disable MD000 -->
- **Seguimiento:** Los problemas identificados durante la inspección se resuelven, y los requerimientos se revisan y actualizan según sea necesario. Se puede realizar una inspección adicional si se han realizado cambios significativos.

El objetivo de la inspección de requerimientos es mejorar la calidad de los requerimientos y reducir los errores y los malentendidos que podrían llevar a problemas más adelante en el desarrollo del software. Además, las inspecciones pueden ayudar a mejorar la comunicación y la comprensión compartida entre los miembros del equipo de desarrollo y los stakeholders.

Es importante destacar que la inspección de requerimientos es una actividad preventiva y no correctiva. Es decir, su objetivo es prevenir errores, no corregir errores que ya han ocurrido. Aunque las inspecciones pueden requerir tiempo y recursos, pueden ahorrar tiempo y recursos a largo plazo al prevenir errores costosos y retrasos en el desarrollo.

----------

### Prototipos

En el contexto del desarrollo de software, un prototipo es una versión preliminar, simplificada o parcial de un sistema que se construye con el fin de explorar o demostrar ciertos aspectos del sistema final. El objetivo principal de un prototipo es proporcionar una representación tangible de las funcionalidades, diseño o comportamiento del sistema que puede ser usada para obtener retroalimentación y validar los requisitos y decisiones de diseño antes de la implementación completa del sistema.

Existen varios tipos de prototipos, dependiendo del propósito para el que se construyen:

- **Prototipos de baja fidelidad (Low-Fi):** Son versiones muy básicas del producto final, que suelen utilizarse en las primeras etapas del proceso de desarrollo. Pueden ser tan simples como bocetos a mano o maquetas estáticas que representan la interfaz de usuario y la navegación básica del sistema.
<!-- markdownlint-disable MD000 -->
- **Prototipos de alta fidelidad (High-Fi):** Son versiones más detalladas y funcionales del producto final. A menudo se ven y se comportan de manera similar al producto final, pero generalmente no están completamente implementadas en términos de funcionalidad completa o integración de back-end.
<!-- markdownlint-disable MD000 -->
- **Prototipos de papel:** Son versiones dibujadas a mano de la interfaz de usuario, usadas generalmente para probar ideas de diseño a muy bajo costo.
<!-- markdownlint-disable MD000 -->
- **Prototipos funcionales:** Se centran en simular la funcionalidad del sistema y la interacción del usuario, pero pueden no representar fielmente la apariencia final del sistema.
<!-- markdownlint-disable MD000 -->
- **Prototipos de interfaz de usuario (UI):** Se centran en la apariencia y la navegación del sistema, pero pueden no tener la funcionalidad completa implementada.

La creación de prototipos es una técnica muy utilizada en los enfoques de desarrollo ágil y centrados en el usuario, ya que facilita la iteración rápida, la experimentación y la implicación del usuario en el proceso de desarrollo. Los prototipos pueden ser una herramienta valiosa para comunicarse con los stakeholders, recoger retroalimentación, validar requisitos y decisiones de diseño, y realizar pruebas de usabilidad. Sin embargo, es importante recordar que los prototipos son solo una herramienta y no deben ser confundidos con el producto final.

----------

## Especificación formal de los datos

### Diagrama de flujo

Los diagramas de flujo son representaciones visuales de los procesos, algoritmos o flujos de trabajo en un sistema de software. Se utilizan ampliamente en el desarrollo de software para comprender y documentar el flujo de control y la secuencia de actividades, desde el inicio hasta la finalización de una tarea específica.

En un diagrama de flujo, los procesos o pasos individuales se representan como símbolos o formas geométricas, y las conexiones entre los pasos se representan mediante flechas. Cada símbolo tiene un significado específico que indica el tipo de operación o actividad que se está realizando.

Algunos de los símbolos más comunes en los diagramas de flujo incluyen:

1. Óvalo: Indica el inicio o el fin de un proceso.
2. Rectángulo: Representa una operación o acción que se lleva a cabo.
3. Rombo: Representa una decisión, donde se evalúa una condición y se toma un camino en función del resultado.
4. Flechas: Indican la dirección y secuencia del flujo de control entre las diferentes operaciones y decisiones.
5. Paralelogramo: Representa la entrada o salida de datos en el proceso.
6. Círculo pequeño: Indica un punto de conexión o referencia, que se utiliza para conectar diferentes partes del diagrama.

Los diagramas de flujo son útiles en el contexto del desarrollo de software por varias razones:

- **Comunicación:** Facilitan la comunicación de ideas y procesos entre los miembros del equipo de desarrollo y los stakeholders, ayudando a garantizar que todos tengan una comprensión clara y compartida del flujo de control y la secuencia de actividades en el sistema.
<!-- markdownlint-disable MD000 -->
- **Análisis:** Permiten analizar el flujo de control y las secuencias de actividades para identificar posibles problemas o áreas de mejora en el diseño o la implementación del sistema.
<!-- markdownlint-disable MD000 -->
- **Documentación:** Sirven como una forma de documentar el diseño y la implementación del sistema para referencia futura y mantenimiento.
<!-- markdownlint-disable MD000 -->
- **Depuración y pruebas:** Facilitan la identificación y resolución de errores en el sistema al proporcionar una representación visual del flujo de control y las actividades que se realizan en el sistema.

En resumen, los diagramas de flujo son una herramienta valiosa en el desarrollo de software para representar visualmente los procesos, algoritmos y flujos de trabajo en un sistema, lo que facilita la comunicación, el análisis, la documentación y la depuración.

----------

### Diccionario de datos

Un diccionario de datos es una estructura de documentación que contiene una lista detallada de todos los elementos de datos que son pertinentes para un sistema o aplicación de software. Esto incluye una descripción detallada de cada elemento de dato, sus atributos y características, relaciones con otros elementos de datos, y cualquier otra información relevante.

Los elementos de un diccionario de datos suelen incluir:

1. **Nombre del elemento de dato**: Un identificador único para cada elemento de dato.
<!-- markdownlint-disable MD000 -->
2. **Descripción**: Una explicación detallada de lo que representa el elemento de dato y cómo se utiliza.
<!-- markdownlint-disable MD000 -->
3. **Tipo de dato**: El tipo de dato que se utiliza para representar el elemento de dato, como entero, cadena de texto, fecha, etc.
<!-- markdownlint-disable MD000 -->
4. **Tamaño**: La cantidad de espacio que ocupa el elemento de dato.
<!-- markdownlint-disable MD000 -->
5. **Formato**: La forma en que se presenta el elemento de dato, como la longitud de una cadena de texto o el formato de una fecha.
<!-- markdownlint-disable MD000 -->
6. **Rango de valores**: Los valores posibles que puede tomar el elemento de dato.
<!-- markdownlint-disable MD000 -->
7. **Relaciones**: Las relaciones entre el elemento de dato y otros elementos de datos en el sistema, por ejemplo, en una base de datos.
<!-- markdownlint-disable MD000 -->
8. **Reglas de negocio**: Cualquier regla de negocio o restricción que se aplique al elemento de dato.

En el contexto del desarrollo de software, un diccionario de datos se utiliza para:

- Proporcionar una comprensión común y consistente de los elementos de datos entre los miembros del equipo de desarrollo y los stakeholders.
- Facilitar la comunicación y la colaboración entre los diferentes roles involucrados en el desarrollo, como analistas de sistemas, diseñadores, desarrolladores y testers.
- Ayudar a garantizar la coherencia y la calidad de los elementos de datos a lo largo del desarrollo y la operación del sistema.
- Facilitar la documentación, el mantenimiento y la evolución del sistema.

Por lo tanto, un diccionario de datos es una herramienta valiosa en el desarrollo de software para gestionar y documentar los elementos de datos de un sistema de manera efectiva.

----------

### Especificación de procesos

La especificación de procesos es un componente crítico en el desarrollo de software que describe detalladamente cómo una función particular o conjunto de funciones dentro de una aplicación o sistema debe operar. En otras palabras, se refiere a la documentación de los detalles específicos de cómo un proceso en particular debe llevarse a cabo.

Las especificaciones de proceso generalmente describen:

1. **Entradas**: Datos o materiales necesarios para llevar a cabo el proceso.
2. **Funciones o procedimientos**: Los pasos detallados que se deben seguir para completar el proceso.
3. **Salidas**: Los resultados esperados después de que se haya completado el proceso.
4. **Excepciones**: Situaciones o condiciones que se desvían de la norma, y cómo el proceso debe manejarlas.
5. **Reglas de negocio**: Las reglas o lógica que deben seguirse dentro del proceso.

En el contexto del desarrollo de software, estas especificaciones pueden incluir detalles sobre cómo un módulo específico de software debe funcionar, cómo debe interactuar con otros módulos y qué resultados debe producir.

Crear especificaciones de procesos detalladas puede ofrecer varios beneficios:

- **Claridad**: Ayuda a los desarrolladores y otras partes interesadas a entender claramente lo que se espera de un proceso, reduciendo así la ambigüedad y los malentendidos.
- **Calidad**: Puede aumentar la calidad del software, ya que se han definido claramente las expectativas y se ha proporcionado una guía para el desarrollo.
- **Eficiencia**: Puede mejorar la eficiencia en el desarrollo al proporcionar una "hoja de ruta" clara a seguir.
- **Pruebas y validación**: Sirve como base para pruebas y validación, ya que define qué se espera del proceso y qué resultados se deben producir.
  
Sin embargo, las especificaciones de proceso también deben ser flexibles para adaptarse a los cambios a medida que se desarrolla el proyecto. En algunas metodologías ágiles de desarrollo de software, las especificaciones de proceso pueden ser menos formales y más adaptativas.

----------

### Lenguaje natural

El lenguaje natural se refiere al lenguaje hablado o escrito por los seres humanos para la comunicación cotidiana, como el inglés, español, francés, etc. En el contexto del desarrollo de software, el lenguaje natural se utiliza de varias maneras.

1. **Documentación y especificación de requisitos**: Muchas veces, los requisitos de un sistema de software se documentan y especifican utilizando lenguaje natural. Esto facilita la comunicación entre los miembros del equipo de desarrollo y los stakeholders, que pueden no estar familiarizados con los lenguajes de programación o notación formal.
<!-- markdownlint-disable MD000 -->
2. **Interfaz de usuario**: El lenguaje natural se utiliza en las interfaces de usuario para facilitar la interacción entre el sistema y el usuario. Los mensajes, menús, botones, etc., suelen estar en lenguaje natural.
<!-- markdownlint-disable MD000 -->
3. **Procesamiento del lenguaje natural (NLP)**: Este es un campo de la inteligencia artificial que se centra en la interacción entre las computadoras y el lenguaje humano. Las aplicaciones de NLP incluyen la traducción automática, el reconocimiento de voz, la generación de texto, el análisis de sentimientos, los chatbots, y más.
<!-- markdownlint-disable MD000 -->
4. **Pruebas**: Los casos de prueba a menudo se escriben en lenguaje natural para describir la entrada, la acción y la salida esperada.

Si bien el uso del lenguaje natural puede facilitar la comunicación y la comprensión, también puede tener desventajas. El lenguaje natural puede ser ambiguo y sujeto a interpretaciones, lo que puede llevar a malentendidos y errores. Por ejemplo, una especificación de requisitos escrita en lenguaje natural puede ser interpretada de manera diferente por diferentes personas.

Por lo tanto, en muchas situaciones, es importante complementar el uso del lenguaje natural con otras formas de especificación y documentación, como diagramas, modelos formales, lenguajes de especificación, etc. Estas herramientas pueden ayudar a reducir la ambigüedad y proporcionar una mayor precisión y detalle.

----------

### Lenguaje estructurado

Entiendo, parece que te estás refiriendo al uso de lenguaje estructurado para documentar los requisitos y las especificaciones de un proyecto de software. En este contexto, el lenguaje estructurado se refiere a una forma de escritura que sigue una estructura predefinida o un conjunto de reglas para mejorar la claridad y la coherencia de la documentación.

La documentación de software a menudo requiere explicar conceptos técnicos complejos y detallar los aspectos precisos de cómo se debe construir o comportar un sistema. Para evitar la ambigüedad y asegurar que la información sea clara y comprensible, los equipos de desarrollo pueden adoptar un enfoque estructurado para redactar esta documentación. Esto puede implicar el uso de plantillas, reglas gramaticales específicas, terminología estandarizada y formatos de presentación consistentes.

Aquí hay algunos ejemplos de cómo se puede aplicar un lenguaje estructurado en la documentación de software:

1. **Plantillas de documentos**: Estas pueden proporcionar una estructura coherente para la documentación, asegurando que se cubran todos los aspectos necesarios y que la información se presente de una manera lógica y fácil de seguir.
<!-- markdownlint-disable MD000 -->
2. **Normas de estilo**: Un conjunto de reglas o pautas para la redacción puede ayudar a garantizar que la documentación sea clara, coherente y libre de ambigüedades.
<!-- markdownlint-disable MD000 -->
3. **Lenguaje controlado**: Esto implica limitar el vocabulario y las estructuras gramaticales que se utilizan para escribir la documentación. Un lenguaje controlado puede ayudar a reducir la ambigüedad y a mejorar la comprensión del texto.
<!-- markdownlint-disable MD000 -->
4. **Especificaciones formales**: Para ciertos aspectos del sistema, puede ser útil utilizar lenguajes formales o semi-formales que proporcionen una descripción precisa y detallada del comportamiento del sistema.

En resumen, el uso de lenguaje estructurado en la documentación de software puede mejorar la claridad, la coherencia y la comprensibilidad de la información, lo que a su vez puede facilitar el desarrollo, la implementación y el mantenimiento del software.

----------

### Tablas de decisiones

Las tablas de decisión son una técnica de modelado utilizada en el desarrollo de software para describir la lógica de negocio de una manera estructurada y fácil de entender. Son especialmente útiles para manejar situaciones en las que un sistema debe tomar decisiones basadas en múltiples condiciones.

Una tabla de decisión consta de dos partes principales:

1. **Condiciones**: Estas son las distintas situaciones o estados que se consideran. Por lo general, se enumeran en la parte superior o en el lado izquierdo de la tabla.
<!-- markdownlint-disable MD000 -->
2. **Acciones**: Estos son los resultados o actividades que se llevarán a cabo en respuesta a las condiciones. Normalmente, se enumeran en la parte inferior o en el lado derecho de la tabla.

Cada columna de la tabla representa una regla de decisión, que especifica una combinación única de condiciones y las acciones correspondientes que deben tomarse. Las condiciones pueden ser verdaderas (T), falsas (F) o no importa (-), y las acciones pueden ser ejecutadas (X) o no ejecutadas (-).

Por ejemplo, consideremos un sistema que determina el tipo de descuento que se aplica a un cliente en función de su antigüedad y si ha realizado alguna compra en el último mes. La tabla de decisión podría verse así:

|Antigüedad > 1 año|Compra en el último mes|Descuento regular|Descuento por lealtad|
|:------------------:|:---------------------:|:---------------:|:------------------:|
| T                 | T                     | -               | X                  |
| T                 | F                     | X               | -                  |
| F                 | T                     | X               | -                  |
| F                 | F                     | -               | -                  |

La tabla de decisión ayuda a visualizar y entender la lógica de negocio del sistema. También puede facilitar la detección de conflictos o redundancias en las reglas de decisión. Además, las tablas de decisión son una herramienta útil para la especificación de requisitos, el diseño, la codificación y las pruebas de software.

              ¿Edad > 18?
              /        \
            Sí         No
            /           \
     ¿Pref. Anterior?   Comedia
       /        \
    Acción    Romántica

En este árbol de decisiones, el primer nodo de decisión es "¿Edad > 18?". Si la respuesta es "Sí", se sigue el camino de la izquierda y se llega al nodo de decisión "¿Pref. Anterior?". Si la respuesta a esa pregunta es "Acción", se recomendará una película de acción. Si la respuesta es "Romántica", se recomendará una película romántica.

----------

## Unidad 4

## Métricas y estándares

### Métricas basadas en la función

Las métricas basadas en la función son medidas que se utilizan en el desarrollo de proyectos de software para evaluar la calidad y el tamaño del software en función de las características y funcionalidades que ofrece. Estas métricas se centran en medir el tamaño y la complejidad del software en términos de las funciones que realiza, en lugar de simplemente contar las líneas de código o el esfuerzo humano.

Las métricas basadas en la función suelen basarse en el concepto de puntos de función. Los puntos de función son una medida estándar utilizada para cuantificar la funcionalidad proporcionada por un sistema de software. Estos puntos se basan en la interacción del sistema con los usuarios y otros sistemas externos.

Existen dos tipos principales de métricas basadas en la función:

1. **Puntos de función no ajustados (UFP)**: Estas métricas cuantifican la funcionalidad del sistema antes de aplicar cualquier ajuste por complejidad o factores específicos del proyecto. Se determinan identificando y clasificando las funciones del sistema, como las transacciones de entrada y salida, las consultas, los informes, las interfaces con otros sistemas, etc. Cada función se valora en términos de su complejidad y tamaño.
<!-- markdownlint-disable MD000 -->
2. **Puntos de función ajustados (AFP)**: Estas métricas tienen en cuenta los factores de ajuste adicionales que pueden afectar la complejidad del software, como la complejidad técnica, la facilidad de uso, el rendimiento, la portabilidad, etc. Los puntos de función ajustados se obtienen multiplicando los puntos de función no ajustados por un factor de ajuste que refleja estos factores.

Las métricas basadas en la función proporcionan varios beneficios en el desarrollo de proyectos de software:

- **Estimación del esfuerzo y recursos**: Al cuantificar la funcionalidad y complejidad del software, las métricas basadas en la función pueden ayudar a estimar el esfuerzo y los recursos necesarios para desarrollar y mantener el sistema.
<!-- markdownlint-disable MD000 -->
- **Comparación y seguimiento**: Estas métricas permiten comparar diferentes proyectos o versiones del software para evaluar su tamaño y complejidad relativa. También se pueden utilizar para realizar un seguimiento del progreso del proyecto a lo largo del tiempo.
<!-- markdownlint-disable MD000 -->
- **Gestión de la calidad**: Las métricas basadas en la función pueden ayudar a evaluar la calidad del software al medir la funcionalidad que se proporciona y detectar posibles problemas de complejidad o rendimiento.

Es importante tener en cuenta que las métricas basadas en la función son solo una herramienta y deben utilizarse junto con otras técnicas de evaluación y gestión de proyectos para obtener una imagen completa de la calidad y el rendimiento del software.

----------

### Métrica de bang

La métrica de bang se refiere a la relación entre los beneficios obtenidos y los costos y esfuerzos invertidos en un proyecto de software. Se utiliza para evaluar la **eficiencia, riesgo y el impacto** de un proyecto.

----------

### Revisiones técnicas formales

Las revisiones técnicas formales, también conocidas como revisiones de diseño o revisiones de código, son procesos estructurados y formales en el desarrollo de proyectos de software para evaluar y validar la calidad, el diseño, la funcionalidad y la conformidad de los artefactos técnicos, como los diseños de software, el código fuente y la documentación técnica.

Las revisiones técnicas formales suelen involucrar a un equipo de personas, incluyendo a los miembros del equipo de desarrollo, los responsables del proyecto, los expertos técnicos y otros stakeholders relevantes. El objetivo principal de estas revisiones es identificar y corregir problemas, defectos o áreas de mejora antes de que el software avance a la siguiente fase del ciclo de vida del proyecto.

A continuación, se describen las etapas típicas de una revisión técnica formal:

1. **Planificación**: Se define el alcance de la revisión, se identifican los participantes clave y se establecen los criterios y objetivos de revisión. También se programan las fechas y los horarios para las sesiones de revisión.
<!-- markdownlint-disable MD000 -->
2. **Preparación**: Los participantes reciben los artefactos técnicos que se van a revisar, como los diseños de software o el código fuente. Cada revisor estudia los materiales y los analiza en profundidad antes de la reunión de revisión.
<!-- markdownlint-disable MD000 -->
3. **Reunión de revisión**: El equipo se reúne para examinar y discutir los artefactos técnicos. Se presentan los materiales y se discuten los aspectos relevantes, como la estructura, la modularidad, la coherencia, el cumplimiento de los requisitos, las buenas prácticas de programación y otros criterios predefinidos. Los revisores realizan preguntas, plantean preocupaciones y ofrecen sugerencias para mejorar los artefactos.
<!-- markdownlint-disable MD000 -->
4. **Registro de problemas**: Durante la reunión de revisión, se registran los problemas, los defectos o las áreas de mejora identificadas en un informe de revisión. Estos problemas se documentan con detalle, y se asignan responsabilidades y plazos para su resolución.
<!-- markdownlint-disable MD000 -->
5. **Seguimiento**: Los problemas identificados durante la revisión se abordan y se solucionan. Se realiza un seguimiento para asegurar que los cambios necesarios se implementen y se verifiquen.

Las revisiones técnicas formales ofrecen diversos beneficios, como:

- **Mejora de la calidad del software**: Al detectar y corregir problemas tempranamente, se mejora la calidad del software final.
<!-- markdownlint-disable MD000 -->
- **Comunicación y conocimiento compartido**: Las revisiones técnicas permiten la comunicación y el intercambio de conocimientos entre los miembros del equipo, mejorando la comprensión y la colaboración.
<!-- markdownlint-disable MD000 -->
- **Aprendizaje y mejora continua**: Las revisiones proporcionan oportunidades para aprender de los errores, mejorar las habilidades y aplicar mejores prácticas en futuros proyectos.
<!-- markdownlint-disable MD000 -->
- **Reducción de costos y tiempo**: Al identificar problemas y defectos tempranamente, se evitan correcciones costosas y retrasos en etapas posteriores del proyecto.

En resumen, las revisiones técnicas formales son un proceso estructurado y sistemático para evaluar y mejorar la calidad, el diseño y la funcionalidad del software en desarrollo. Ayudan a detectar problemas y mejorar la eficiencia y efectividad del proyecto.

----------

### Indicadores

En el contexto del desarrollo de proyectos de software, los indicadores son medidas cuantitativas o cualitativas utilizadas para evaluar y medir el rendimiento, el progreso, la calidad y otros aspectos relevantes del proyecto. Los indicadores proporcionan información objetiva y medible sobre el estado del proyecto y ayudan a tomar decisiones informadas.

Los indicadores en el desarrollo de proyectos de software pueden abarcar diferentes áreas y aspectos, tales como:

1. **Rendimiento del proyecto**: Los indicadores de rendimiento evalúan la eficiencia y la eficacia del proyecto en términos de cumplimiento de plazos, utilización de recursos, cumplimiento de objetivos, etc. Ejemplos de indicadores de rendimiento pueden incluir el cumplimiento de hitos, el avance del trabajo, la productividad del equipo, el seguimiento del presupuesto, etc.
<!-- markdownlint-disable MD000 -->
2. **Calidad del software**: Los indicadores de calidad se utilizan para evaluar la calidad del software desarrollado, como la tasa de defectos, la satisfacción del cliente, la estabilidad del sistema, etc. Estos indicadores pueden basarse en métricas como el número de defectos encontrados en pruebas, el tiempo promedio de solución de defectos, la tasa de aceptación de pruebas de usuarios, etc.
<!-- markdownlint-disable MD000 -->
3. **Satisfacción del cliente**: Los indicadores de satisfacción del cliente evalúan el grado de satisfacción del cliente con el software desarrollado y los servicios relacionados. Pueden basarse en encuestas de satisfacción, retroalimentación directa del cliente, tiempos de respuesta a solicitudes, etc.
<!-- markdownlint-disable MD000 -->
4. **Eficiencia y rendimiento del software**: Estos indicadores evalúan el rendimiento y la eficiencia del software en términos de tiempo de respuesta, uso de recursos, escalabilidad, entre otros. Pueden incluir métricas como el tiempo de carga de páginas web, la velocidad de procesamiento de transacciones, la utilización de recursos del sistema, etc.
<!-- markdownlint-disable MD000 -->
5. **Seguridad y fiabilidad del software**: Los indicadores de seguridad y fiabilidad evalúan la robustez y confiabilidad del software, como la tasa de fallos, la tasa de cumplimiento de normas de seguridad, la disponibilidad del sistema, etc.

Es importante seleccionar los indicadores adecuados para el contexto del proyecto y definir criterios claros de medición. Además, los indicadores deben ser monitoreados regularmente y utilizados para tomar decisiones y realizar mejoras en el proyecto de software.

En resumen, los indicadores son medidas cuantitativas o cualitativas utilizadas para evaluar y medir diferentes aspectos del desarrollo de proyectos de software, incluyendo el rendimiento, la calidad, la satisfacción del cliente y otros aspectos relevantes. Los indicadores proporcionan información objetiva que ayuda en la toma de decisiones y la mejora continua del proyecto.