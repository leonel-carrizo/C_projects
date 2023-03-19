# Dado un mapa de 4x4, coloque cuadros de altura 1 a 4 en cada cuadro disponible de manera que cada fila y columna vea el número correcto de cuadros desde cada uno de los posibles puntos de vista (izquierda/derecha para filas, arriba/abajo para columnas). ).

# Ej: El cuadro de altura 3 ocultará el cuadro de altura 1 de la izquierda, por lo que tenemos 3 cuadros visibles, y solo uno de la derecha, porque el cuadro de altura 4 oculta todo.

# Cada una de las vistas (2 por fila y 2 por columna) tendrá un valor determinado. Su programa debe colocar los cuadros correctamente, asegurándose de que cada fila y columna solo tenga un cuadro de cada tamaño.

# Su salida contendrá la primera solución que encuentre.

# Así es como lanzaremos su programa:

# > ./rush-01 "col1up col2up col3up col4up col1down col2down col3down col4down row1left row2left row3left row4left row1right row2right row3right row4right"

# (cf. annex 1)

# "col1up" es el valor para el punto de vista superior de la columna izquierda. Cada uno de estos representa una cadena de caracteres de valores que oscilan entre '1' y '4'

# Esta es la ÚNICA entrada aceptable para su programa. Cualquier otra entrada debe considerarse un error.

# Aquí hay un ejemplo de entrada/salida prevista para un conjunto válido:

./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
1 2 3 4$
2 3 4 1$
3 4 1 2$
4 1 2 3$

# (cf. annex 2 and 3).

# En caso de error o si no puede encontrar ninguna solución, muestre "Error" seguido de un salto de línea.

# Si desea puntos de bonificación, puede intentar manejar otro tamaño de mapa (hasta 9x9 !!!!).

# Como de costumbre, si un bono funciona, pero el obligatorio no pasa las pruebas, obtendrás 0.

#################################  Annexe  ###########################################

# Lo que sigue es una vista artística de su programa. Obviamente, debe entregar un programa como se describe en el capítulo anterior.
# El único objetivo de estas representaciones es ayudarlo a comprender el proyecto. (ver anexo).

#  Representation of your program using col_up, col_down, row_left and row_right.

### • Su programa debe llenar los espacios en blanco dentro usando las reglas dadas en la primera parte.

