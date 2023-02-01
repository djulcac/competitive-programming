# Cheat Sheet VIM

## Config

"agregar números de las lineas
set nu
set number

"quitar numero

## View log

## back to last change
:undo
u
"tambien se puede usar g+ y g- para moverse en ambas direcciones
g+
g-
:changes "lista de los ultimos cambios

# View old files
:browse oldfiles
:oldfiles

# tabs
"crear un nuevo tab
:tabnew filename
"cambiar de siguiente tab"
gt
"cambiar al previo tab
gT
" mover el tab a la posicion n (comienza en 0)
:tabm n
" para ver todas los archivos en las pestañas
:tabs

# edit
" editar nuevo archivo
:edit filename
:e filename
" borrar desde la posición actual hasta el inicio de la linea
d0
" borrar desde la posición actual hasta el final de la linea
d$
" borrar toda la línea
dd

# Terminal
" se abre un terminal
:terminal
" se ejecuta un comando, por ejemplo ls
:! ls

# split
" split horizontal
:split
[ctrl+w] + s
" split vertical
:vsplit
[ctrl+w] + v
" moverse a la derecha
[ctrl+w] + l
" mover a la izquierda
[ctrl+w] + h
" mover el actual ventana a la derecha
[ctrl+w]+L
" mover la actual ventana a la izquierda
[ctrl+w]+H

# copy
" cambiar al mode visual presionando v
" seleccionar el texto usando por ejemplo h,j,k,l y luego presionar "y"
" con esto se retorna al modo commando y ya podemos pegorlo donde queremo
" con "p"

# move
" izquierda
h
" derecha
l
" abajo
j
" arriba
k
" Moverse a la última linea visible
L
" Moverse al medio de la pantall
M
" Moverse a la primera línea visible
H
" moverse al inicio de la línea
0
" moverse al final de la línea
$
" moverse al inicio de la siguiente palabra
w
" moverse al inicio de la anterior palabra
b
" para ir al inicio del archivo
gg
" para ir al final del archivo
G
" ir a la linea 20
20G
:20
# Scroll
" mover la pantalla una linea hacia arriba
[ctrl+y]
" mover la pantalla una línea hacia abajo
[ctrl+e]
" mover hacia arriba media pagina
[ctrl+u]
" mover hacia abajo media página
[ctrl+d]
" mover hacia arriba una página entera
[ctrl+b]
" mover hacia abajo una página entera
[ctrl+f]

# mode command to edit
" para empezar a insertar en la posición donde se esta
i
" para empezar a insertar en la posición debajo de al línea
o
" para insertar encima de la línea
O

# utf
" codificar caracteres en utf-8
:set encoding=utf-8
:set fileencoding=utf-8

# custom
" mostrar caracteres en space, tab, eol,..
:set list
" quitar lo anterior
:set nolist
:set list listchars=tab:▸\ ,trail:·,precedes:←,extends:→
:set list listchars=tab:▸\ ,trail:·,precedes:←,extends:→,eol:$
" tab
:st tabstop=4

# buffer
"abrir buffer 2 en este windows
:b2
"ver los archivos en buffer
:ls
"quitar un archivo del  buffer
:bd

# Ref
- https://codingpotions.com/vim-movimientos-horizontales
- https://victorhck.gitbook.io/aprende-vim/cap03_abriendo_y_buscando_archivos
- https://codingpotions.com/vim-movimientos-verticales
- https://victorhckinthefreeworld.com/2019/04/10/utilizar-pestanas-en-el-editor-vim/
- https://www.reddit.com/r/vim/comments/4hoa6e/what_do_you_use_for_your_listchars/
- https://stackoverflow.com/questions/63017771/how-to-modify-change-the-vimrc-file-in-vscode
- https://stackoverflow.com/questions/1878974/redefine-tab-as-4-spaces
- https://www.cs.oberlin.edu/~kuperman/help/vim/windows.html
- https://victorhck.gitbook.io/aprende-vim/cap02_buffers_ventanas_pestanas

