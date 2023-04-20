# Cheat Sheet TMUX

Activar comandos: Ctrl + b

## Windows (tabs)
c  create window
w  list windows
n  next window
p  previous window
f  find window
,  name window
&  kill window

## Panes (splits)
%  vertical split
"  horizontal split

o  swap panes
q  show pane numbers
x  kill pane
+  break pane into window (e.g. to select text by mouse to copy)
-  restore pane from window
   space - toggle between layouts
<prefix> q (Show pane numbers, when the numbers show up type the key to goto that pane)
<prefix> { (Move the current pane left)
<prefix> } (Move the current pane right)
<prefix> z toggle pane zoom
### Move
<arrows> to move between panes
## UTF-8
tmux -u
## status/bar
tmux set -g status-right "#[fg=white]#S #I:#P #[fg=yellow]:: [%d %b |#[fg=cyan] #(TZ=UTC date -u +%%H:%%M:%%S) UTC | #(TZ=Asia/Kolkata date +%%H:%%M:%%S) IST]"
tmux set -g status-right "[%d %b | #(TZ=UTC date -u +%%H:%%M:%%S) UTC | #(TZ=America/Lima date +%%H:%%M:%%S) PET]"
## REF
- https://gist.github.com/MohamedAlaa/2961058
- https://tmuxcheatsheet.com/
- https://dev.to/brandonwallace/make-your-tmux-status-bar-100-better-with-bash-2fne
	- solo usando bash
