let SessionLoad = 1
if &cp | set nocp | endif
let s:cpo_save=&cpo
set cpo&vim
inoremap <F2> ggi<Up># **************************************************************************** ##                                                                              ##                                                         :::      ::::::::    ##    "%pa                                                   57|i:+:      :+:    :+:    ##                                                     +:+ +:+         +:+      ##    By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+         ##                                                 +#+#+#+#+#+   +#+            ##    Created: 20:put =strftime('%y/%m/%d %H:%M:%S')<Up>$a<Del>$a by tnicolas          #+#    #+#              ##    Updated: 20:put =strftime('%y/%m/%d %H:%M:%S')<Up>$a<Del>$a by tnicolas         ###   ########.fr        ##                                                                              ## **************************************************************************** #
inoremap <F1> ggi<Up>/* ************************************************************************** *//*                                                                            *//*                                                        :::      ::::::::   *//*   "%pa                                                   57|i:+:      :+:    :+:   *//*                                                    +:+ +:+         +:+     *//*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        *//*                                                +#+#+#+#+#+   +#+           *//*   Created: 20:put =strftime('%y/%m/%d %H:%M:%S')<Up>$a<Del>$a by tnicolas          #+#    #+#             *//*   Updated: 20:put =strftime('%y/%m/%d %H:%M:%S')<Up>$a<Del>$a by tnicolas         ###   ########.fr       *//*                                                                            *//* ************************************************************************** */
inoremap <S-Down> :+5
inoremap <S-Up> :-5
inoremap <S-Left> <Left><Left><Left><Left><Left>
inoremap <S-Right> <Right><Right><Right><Right><Right>
inoremap <F4> :set invcursorlinea
inoremap <F3> :set invrelativenumbera
inoremap <F5> :wa:mksession!
nnoremap  i
nnoremap <NL> j
nnoremap <Down> j
nnoremap <C-Down> j
nnoremap  k
nnoremap <Up> k
nnoremap <C-Up> k
nnoremap  h
nnoremap <Left> h
nnoremap <C-Left> h
nnoremap  l
nnoremap <Right> l
nnoremap <C-Right> l
nnoremap <C-S-Tab> :tabmove -1
nnoremap <S-Tab> :tabmove -1
nnoremap <C-Tab> :tabmove +1
nnoremap 	 :tabmove +1
nnoremap  :tabclose
nnoremap c :tabclose
nnoremap  :tabnew:bn
nnoremap t :tabnew:bn
nnoremap V :so $MYVIMRC
nnoremap  :so $MYVIMRC
nnoremap v :so $MYVIMRC
nnoremap f fL
nnoremap  :wa:wqa
nnoremap q :wa:wqa
nnoremap  :wa
nnoremap w :wa
nnoremap <F5> :wa:mksession!:wqa
vmap gx <Plug>NetrwBrowseXVis
nmap gx <Plug>NetrwBrowseX
vnoremap <silent> <Plug>NetrwBrowseXVis :call netrw#BrowseXVis()
nnoremap <silent> <Plug>NetrwBrowseX :call netrw#BrowseX(expand((exists("g:netrw_gx")? g:netrw_gx : '<cfile>')),netrw#CheckIfRemote())
noremap <F2> ggi<Up># **************************************************************************** ##                                                                              ##                                                         :::      ::::::::    ##    "%pa                                                   57|i:+:      :+:    :+:    ##                                                     +:+ +:+         +:+      ##    By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+         ##                                                 +#+#+#+#+#+   +#+            ##    Created: 20:put =strftime('%y/%m/%d %H:%M:%S')<Up>$a<Del>$a by tnicolas          #+#    #+#              ##    Updated: 20:put =strftime('%y/%m/%d %H:%M:%S')<Up>$a<Del>$a by tnicolas         ###   ########.fr        ##                                                                              ## **************************************************************************** #
noremap <F1> ggi<Up>/* ************************************************************************** *//*                                                                            *//*                                                        :::      ::::::::   *//*   "%pa                                                   57|i:+:      :+:    :+:   *//*                                                    +:+ +:+         +:+     *//*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        *//*                                                +#+#+#+#+#+   +#+           *//*   Created: 20:put =strftime('%y/%m/%d %H:%M:%S')<Up>$a<Del>$a by tnicolas          #+#    #+#             *//*   Updated: 20:put =strftime('%y/%m/%d %H:%M:%S')<Up>$a<Del>$a by tnicolas         ###   ########.fr       *//*                                                                            *//* ************************************************************************** */
nnoremap <S-Down> :+5
nnoremap <S-Up> :-5
nnoremap <S-Left> <Left><Left><Left><Left><Left>
nnoremap <S-Right> <Right><Right><Right><Right><Right>
nnoremap <F4> :set invcursorline
nnoremap <F3> :set invrelativenumber
nnoremap <Del> xi
nnoremap <BS> Xi
nnoremap <F5> :wa:mksession!
inoremap j ja
inoremap <NL> ja
inoremap <Down> ja
inoremap <C-Down> ja
inoremap k ka
inoremap  ka
inoremap <Up> ka
inoremap <C-Up> ka
inoremap h ha
inoremap  ha
inoremap <Left> ha
inoremap <C-Left> ha
inoremap l la
inoremap  la
inoremap <Right> la
inoremap <C-Right> la
inoremap <C-S-Tab> :tabmove -1
inoremap <S-Tab> :tabmove -1
inoremap <C-Tab> :tabmove +1
inoremap 	 :tabmove +1
inoremap  :tabclose
inoremap c :tabclose
inoremap  :tabnew:bn
inoremap t :tabnew:bn
inoremap f fLi
inoremap  :wa:wqa
inoremap q :wa:wqa
inoremap  :wa
inoremap w :wa
inoremap <F5> :wa:mksession!:wqa
cnoremap Wq :wq
cnoremap WQ :wq
cnoremap W :w
cnoremap X :x
inoremap {	 {}<Up>i==<Del>a<Right>
abbr main int		main(int ac, char **av){return(0);<Left><Del>}<Up><Up>
let &cpo=s:cpo_save
unlet s:cpo_save
set background=dark
set backspace=2
set cindent
set fileencodings=ucs-bom,utf-8,default,latin1
set helplang=fr
set laststatus=2
set modelines=0
set mouse=a
set omnifunc=syntaxcomplete#Complete
set rulerformat=%27(%{strftime('%a\ %e\ %b\ %I:%M\ %p')}\ %2l,%-2(%c%V%)\ %P%)
set scrolloff=4
set shiftwidth=4
set shortmess=a
set showcmd
set smartindent
set tabstop=4
set window=0
let s:so_save = &so | let s:siso_save = &siso | set so=0 siso=0
let v:this_session=expand("<sfile>:p")
silent only
cd ~/Documents/git/libft/rendu
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
set shortmess=aoO
badd +1 ./libft.h
badd +15 ./Makefile
badd +1 ../main.c
badd +0 ../a_faire.txt
badd +0 ft_strlen.c
argglobal
silent! argdel *
argadd ./libft.h
argadd ./Makefile
argadd ../main.c
set stal=2
edit ./Makefile
set splitbelow splitright
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd w
set nosplitbelow
set nosplitright
wincmd t
set winheight=1 winwidth=1
exe 'vert 1resize ' . ((&columns * 102 + 102) / 204)
exe 'vert 2resize ' . ((&columns * 101 + 102) / 204)
argglobal
edit ./Makefile
setlocal noautoindent
setlocal backupcopy=
setlocal nobinary
setlocal nobreakindent
setlocal breakindentopt=
setlocal bufhidden=
setlocal buflisted
setlocal buftype=
setlocal cindent
setlocal cinkeys=0{,0},0),:,0#,!^F,o,O,e
setlocal cinoptions=
setlocal cinwords=if,else,while,do,for,switch
set colorcolumn=81
setlocal colorcolumn=81
setlocal comments=sO:#\ -,mO:#\ \ ,b:#
setlocal commentstring=#\ %s
setlocal complete=.,w,b,u,t,i
setlocal completefunc=
setlocal nocopyindent
setlocal cryptmethod=
setlocal nocursorbind
setlocal nocursorcolumn
setlocal nocursorline
setlocal define=
setlocal dictionary=
setlocal nodiff
setlocal equalprg=
setlocal errorformat=
setlocal noexpandtab
if &filetype != 'make'
setlocal filetype=make
endif
setlocal fixendofline
setlocal foldcolumn=0
setlocal foldenable
setlocal foldexpr=0
setlocal foldignore=#
setlocal foldlevel=0
setlocal foldmarker={{{,}}}
setlocal foldmethod=manual
setlocal foldminlines=1
setlocal foldnestmax=20
setlocal foldtext=foldtext()
setlocal formatexpr=
setlocal formatoptions=croql
setlocal formatlistpat=^\\s*\\d\\+[\\]:.)}\\t\ ]\\s*
setlocal grepprg=
setlocal iminsert=0
setlocal imsearch=0
setlocal include=^\\s*include
setlocal includeexpr=
setlocal indentexpr=GetMakeIndent()
setlocal indentkeys=!^F,o,O,<:>,=else,=endif
setlocal noinfercase
setlocal iskeyword=@,48-57,_,192-255
setlocal keywordprg=
setlocal nolinebreak
setlocal nolisp
setlocal lispwords=
setlocal nolist
setlocal makeprg=
setlocal matchpairs=(:),{:},[:]
setlocal modeline
setlocal modifiable
setlocal nrformats=octal,hex
set number
setlocal number
setlocal numberwidth=4
setlocal omnifunc=syntaxcomplete#Complete
setlocal path=
setlocal nopreserveindent
setlocal nopreviewwindow
setlocal quoteescape=\\
setlocal noreadonly
setlocal norelativenumber
setlocal noscrollbind
setlocal shiftwidth=4
setlocal noshortname
setlocal nosmartindent
setlocal softtabstop=0
setlocal nospell
setlocal spellcapcheck=[.?!]\\_[\\])'\"\	\ ]\\+
setlocal spellfile=
setlocal spelllang=en
setlocal statusline=
setlocal suffixesadd=
setlocal swapfile
setlocal synmaxcol=3000
if &syntax != 'make'
setlocal syntax=make
endif
setlocal tabstop=4
setlocal tags=
setlocal textwidth=0
setlocal thesaurus=
setlocal noundofile
setlocal undolevels=-123456
setlocal nowinfixheight
setlocal nowinfixwidth
setlocal wrap
setlocal wrapmargin=0
silent! normal! zE
let s:l = 15 - ((6 * winheight(0) + 24) / 48)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
15
normal! 024|
wincmd w
argglobal
edit ../a_faire.txt
setlocal noautoindent
setlocal backupcopy=
setlocal nobinary
setlocal nobreakindent
setlocal breakindentopt=
setlocal bufhidden=
setlocal buflisted
setlocal buftype=
setlocal cindent
setlocal cinkeys=0{,0},0),:,0#,!^F,o,O,e
setlocal cinoptions=
setlocal cinwords=if,else,while,do,for,switch
set colorcolumn=81
setlocal colorcolumn=81
setlocal comments=fb:-,fb:*
setlocal commentstring=
setlocal complete=.,w,b,u,t,i
setlocal completefunc=
setlocal nocopyindent
setlocal cryptmethod=
setlocal nocursorbind
setlocal nocursorcolumn
setlocal nocursorline
setlocal define=
setlocal dictionary=
setlocal nodiff
setlocal equalprg=
setlocal errorformat=
setlocal noexpandtab
if &filetype != 'text'
setlocal filetype=text
endif
setlocal fixendofline
setlocal foldcolumn=0
setlocal foldenable
setlocal foldexpr=0
setlocal foldignore=#
setlocal foldlevel=0
setlocal foldmarker={{{,}}}
setlocal foldmethod=manual
setlocal foldminlines=1
setlocal foldnestmax=20
setlocal foldtext=foldtext()
setlocal formatexpr=
setlocal formatoptions=tcq
setlocal formatlistpat=^\\s*\\d\\+[\\]:.)}\\t\ ]\\s*
setlocal grepprg=
setlocal iminsert=0
setlocal imsearch=0
setlocal include=
setlocal includeexpr=
setlocal indentexpr=
setlocal indentkeys=0{,0},:,0#,!^F,o,O,e
setlocal noinfercase
setlocal iskeyword=@,48-57,_,192-255
setlocal keywordprg=
setlocal nolinebreak
setlocal nolisp
setlocal lispwords=
setlocal nolist
setlocal makeprg=
setlocal matchpairs=(:),{:},[:]
setlocal modeline
setlocal modifiable
setlocal nrformats=octal,hex
set number
setlocal number
setlocal numberwidth=4
setlocal omnifunc=syntaxcomplete#Complete
setlocal path=
setlocal nopreserveindent
setlocal nopreviewwindow
setlocal quoteescape=\\
setlocal noreadonly
setlocal norelativenumber
setlocal noscrollbind
setlocal shiftwidth=4
setlocal noshortname
setlocal smartindent
setlocal softtabstop=0
setlocal nospell
setlocal spellcapcheck=[.?!]\\_[\\])'\"\	\ ]\\+
setlocal spellfile=
setlocal spelllang=en
setlocal statusline=
setlocal suffixesadd=
setlocal swapfile
setlocal synmaxcol=3000
if &syntax != 'text'
setlocal syntax=text
endif
setlocal tabstop=4
setlocal tags=
setlocal textwidth=0
setlocal thesaurus=
setlocal noundofile
setlocal undolevels=-123456
setlocal nowinfixheight
setlocal nowinfixwidth
setlocal wrap
setlocal wrapmargin=0
silent! normal! zE
let s:l = 1 - ((0 * winheight(0) + 24) / 48)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
1
normal! 0
wincmd w
exe 'vert 1resize ' . ((&columns * 102 + 102) / 204)
exe 'vert 2resize ' . ((&columns * 101 + 102) / 204)
tabedit ./libft.h
set splitbelow splitright
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd w
set nosplitbelow
set nosplitright
wincmd t
set winheight=1 winwidth=1
exe 'vert 1resize ' . ((&columns * 102 + 102) / 204)
exe 'vert 2resize ' . ((&columns * 101 + 102) / 204)
argglobal
edit ./libft.h
setlocal noautoindent
setlocal backupcopy=
setlocal nobinary
setlocal nobreakindent
setlocal breakindentopt=
setlocal bufhidden=
setlocal buflisted
setlocal buftype=
setlocal cindent
setlocal cinkeys=0{,0},0),:,0#,!^F,o,O,e
setlocal cinoptions=
setlocal cinwords=if,else,while,do,for,switch
set colorcolumn=81
setlocal colorcolumn=81
setlocal comments=sO:*\ -,mO:*\ \ ,exO:*/,s1:/*,mb:*,ex:*/,://
setlocal commentstring=/*%s*/
setlocal complete=.,w,b,u,t,i
setlocal completefunc=
setlocal nocopyindent
setlocal cryptmethod=
setlocal nocursorbind
setlocal nocursorcolumn
setlocal nocursorline
setlocal define=
setlocal dictionary=
setlocal nodiff
setlocal equalprg=
setlocal errorformat=
setlocal noexpandtab
if &filetype != 'cpp'
setlocal filetype=cpp
endif
setlocal fixendofline
setlocal foldcolumn=0
setlocal foldenable
setlocal foldexpr=0
setlocal foldignore=#
setlocal foldlevel=0
setlocal foldmarker={{{,}}}
setlocal foldmethod=manual
setlocal foldminlines=1
setlocal foldnestmax=20
setlocal foldtext=foldtext()
setlocal formatexpr=
setlocal formatoptions=croql
setlocal formatlistpat=^\\s*\\d\\+[\\]:.)}\\t\ ]\\s*
setlocal grepprg=
setlocal iminsert=0
setlocal imsearch=0
setlocal include=
setlocal includeexpr=
setlocal indentexpr=
setlocal indentkeys=0{,0},:,0#,!^F,o,O,e
setlocal noinfercase
setlocal iskeyword=@,48-57,_,192-255
setlocal keywordprg=
setlocal nolinebreak
setlocal nolisp
setlocal lispwords=
setlocal nolist
setlocal makeprg=
setlocal matchpairs=(:),{:},[:]
setlocal modeline
setlocal modifiable
setlocal nrformats=octal,hex
set number
setlocal number
setlocal numberwidth=4
setlocal omnifunc=ccomplete#Complete
setlocal path=
setlocal nopreserveindent
setlocal nopreviewwindow
setlocal quoteescape=\\
setlocal noreadonly
setlocal norelativenumber
setlocal noscrollbind
setlocal shiftwidth=4
setlocal noshortname
setlocal smartindent
setlocal softtabstop=0
setlocal nospell
setlocal spellcapcheck=[.?!]\\_[\\])'\"\	\ ]\\+
setlocal spellfile=
setlocal spelllang=en
setlocal statusline=
setlocal suffixesadd=
setlocal swapfile
setlocal synmaxcol=3000
if &syntax != 'cpp'
setlocal syntax=cpp
endif
setlocal tabstop=4
setlocal tags=
setlocal textwidth=0
setlocal thesaurus=
setlocal noundofile
setlocal undolevels=-123456
setlocal nowinfixheight
setlocal nowinfixwidth
setlocal wrap
setlocal wrapmargin=0
silent! normal! zE
let s:l = 16 - ((15 * winheight(0) + 24) / 48)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
16
normal! 037|
wincmd w
argglobal
edit ../main.c
setlocal noautoindent
setlocal backupcopy=
setlocal nobinary
setlocal nobreakindent
setlocal breakindentopt=
setlocal bufhidden=
setlocal buflisted
setlocal buftype=
setlocal cindent
setlocal cinkeys=0{,0},0),:,0#,!^F,o,O,e
setlocal cinoptions=
setlocal cinwords=if,else,while,do,for,switch
set colorcolumn=81
setlocal colorcolumn=81
setlocal comments=sO:*\ -,mO:*\ \ ,exO:*/,s1:/*,mb:*,ex:*/,://
setlocal commentstring=/*%s*/
setlocal complete=.,w,b,u,t,i
setlocal completefunc=
setlocal nocopyindent
setlocal cryptmethod=
setlocal nocursorbind
setlocal nocursorcolumn
setlocal nocursorline
setlocal define=
setlocal dictionary=
setlocal nodiff
setlocal equalprg=
setlocal errorformat=
setlocal noexpandtab
if &filetype != 'c'
setlocal filetype=c
endif
setlocal fixendofline
setlocal foldcolumn=0
setlocal foldenable
setlocal foldexpr=0
setlocal foldignore=#
setlocal foldlevel=0
setlocal foldmarker={{{,}}}
setlocal foldmethod=manual
setlocal foldminlines=1
setlocal foldnestmax=20
setlocal foldtext=foldtext()
setlocal formatexpr=
setlocal formatoptions=croql
setlocal formatlistpat=^\\s*\\d\\+[\\]:.)}\\t\ ]\\s*
setlocal grepprg=
setlocal iminsert=0
setlocal imsearch=0
setlocal include=
setlocal includeexpr=
setlocal indentexpr=
setlocal indentkeys=0{,0},:,0#,!^F,o,O,e
setlocal noinfercase
setlocal iskeyword=@,48-57,_,192-255
setlocal keywordprg=
setlocal nolinebreak
setlocal nolisp
setlocal lispwords=
setlocal nolist
setlocal makeprg=
setlocal matchpairs=(:),{:},[:]
setlocal modeline
setlocal modifiable
setlocal nrformats=octal,hex
set number
setlocal number
setlocal numberwidth=4
setlocal omnifunc=ccomplete#Complete
setlocal path=
setlocal nopreserveindent
setlocal nopreviewwindow
setlocal quoteescape=\\
setlocal noreadonly
setlocal norelativenumber
setlocal noscrollbind
setlocal shiftwidth=4
setlocal noshortname
setlocal smartindent
setlocal softtabstop=0
setlocal nospell
setlocal spellcapcheck=[.?!]\\_[\\])'\"\	\ ]\\+
setlocal spellfile=
setlocal spelllang=en
setlocal statusline=
setlocal suffixesadd=
setlocal swapfile
setlocal synmaxcol=3000
if &syntax != 'c'
setlocal syntax=c
endif
setlocal tabstop=4
setlocal tags=
setlocal textwidth=0
setlocal thesaurus=
setlocal noundofile
setlocal undolevels=-123456
setlocal nowinfixheight
setlocal nowinfixwidth
setlocal wrap
setlocal wrapmargin=0
silent! normal! zE
let s:l = 17 - ((16 * winheight(0) + 24) / 48)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
17
normal! 0
wincmd w
exe 'vert 1resize ' . ((&columns * 102 + 102) / 204)
exe 'vert 2resize ' . ((&columns * 101 + 102) / 204)
tabedit ft_strlen.c
set splitbelow splitright
set nosplitbelow
set nosplitright
wincmd t
set winheight=1 winwidth=1
argglobal
edit ft_strlen.c
setlocal noautoindent
setlocal backupcopy=
setlocal nobinary
setlocal nobreakindent
setlocal breakindentopt=
setlocal bufhidden=
setlocal buflisted
setlocal buftype=
setlocal cindent
setlocal cinkeys=0{,0},0),:,0#,!^F,o,O,e
setlocal cinoptions=
setlocal cinwords=if,else,while,do,for,switch
set colorcolumn=81
setlocal colorcolumn=81
setlocal comments=sO:*\ -,mO:*\ \ ,exO:*/,s1:/*,mb:*,ex:*/,://
setlocal commentstring=/*%s*/
setlocal complete=.,w,b,u,t,i
setlocal completefunc=
setlocal nocopyindent
setlocal cryptmethod=
setlocal nocursorbind
setlocal nocursorcolumn
setlocal nocursorline
setlocal define=
setlocal dictionary=
setlocal nodiff
setlocal equalprg=
setlocal errorformat=
setlocal noexpandtab
if &filetype != 'c'
setlocal filetype=c
endif
setlocal fixendofline
setlocal foldcolumn=0
setlocal foldenable
setlocal foldexpr=0
setlocal foldignore=#
setlocal foldlevel=0
setlocal foldmarker={{{,}}}
setlocal foldmethod=manual
setlocal foldminlines=1
setlocal foldnestmax=20
setlocal foldtext=foldtext()
setlocal formatexpr=
setlocal formatoptions=croql
setlocal formatlistpat=^\\s*\\d\\+[\\]:.)}\\t\ ]\\s*
setlocal grepprg=
setlocal iminsert=0
setlocal imsearch=0
setlocal include=
setlocal includeexpr=
setlocal indentexpr=
setlocal indentkeys=0{,0},:,0#,!^F,o,O,e
setlocal noinfercase
setlocal iskeyword=@,48-57,_,192-255
setlocal keywordprg=
setlocal nolinebreak
setlocal nolisp
setlocal lispwords=
setlocal nolist
setlocal makeprg=
setlocal matchpairs=(:),{:},[:]
setlocal modeline
setlocal modifiable
setlocal nrformats=octal,hex
set number
setlocal number
setlocal numberwidth=4
setlocal omnifunc=ccomplete#Complete
setlocal path=
setlocal nopreserveindent
setlocal nopreviewwindow
setlocal quoteescape=\\
setlocal noreadonly
setlocal norelativenumber
setlocal noscrollbind
setlocal shiftwidth=4
setlocal noshortname
setlocal smartindent
setlocal softtabstop=0
setlocal nospell
setlocal spellcapcheck=[.?!]\\_[\\])'\"\	\ ]\\+
setlocal spellfile=
setlocal spelllang=en
setlocal statusline=
setlocal suffixesadd=
setlocal swapfile
setlocal synmaxcol=3000
if &syntax != 'c'
setlocal syntax=c
endif
setlocal tabstop=4
setlocal tags=
setlocal textwidth=0
setlocal thesaurus=
setlocal noundofile
setlocal undolevels=-123456
setlocal nowinfixheight
setlocal nowinfixwidth
setlocal wrap
setlocal wrapmargin=0
silent! normal! zE
let s:l = 16 - ((15 * winheight(0) + 24) / 48)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
16
normal! 015|
tabnext 2
set stal=1
if exists('s:wipebuf')
  silent exe 'bwipe ' . s:wipebuf
endif
unlet! s:wipebuf
set winheight=1 winwidth=20 shortmess=a
let s:sx = expand("<sfile>:p:r")."x.vim"
if file_readable(s:sx)
  exe "source " . fnameescape(s:sx)
endif
let &so = s:so_save | let &siso = s:siso_save
doautoall SessionLoadPost
unlet SessionLoad
" vim: set ft=vim :
