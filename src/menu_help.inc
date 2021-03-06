% - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
%
% Panel help entry.
%
% - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

% - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
% Show help window.
%
% ( ) => ( )
%
/panel.help {
   help.context "opt" eq {
     findbootoption
     help.mapcontext
     dup help.findpage
     "" eq { pop } { help.setcontext } ifelse
   } if
   show_help

} def


% - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
% Return width of help entry.
%
% ( ) => ( width )
%
/panel.help.width {
  txt_help strsize pop
} def


% - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
% Redraw panel entry.
%
% ( panel ) => ( )
%
/panel.help.update {
  panel.text.moveto
  panel.title.fg setcolor
  txt_help show.rtl
} def


