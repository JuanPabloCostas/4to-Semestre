# Guía para el segundo examen de Análisis y Desarrollo de software

## Unidad 3

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

