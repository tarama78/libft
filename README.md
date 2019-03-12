# libft

## add or update libft files in a project
```
rm -rf libft && git clone https://github.com/tnicolas42/libft _tmp_lib && mv _tmp_lib/lib libft && rm -rf _tmp_lib
```

## create a new project with the libft

Clone your project.
Then init:
```
mkdir srcs
mkdir includes
git clone https://github.com/tnicolas42/libft _tmp_lib
mv _tmp_lib/lib libft
mv _tmp_lib/Makefile_example Makefile
rm -rf _tmp_lib
echo "\n# others\n*.vim\n*.swp\n*.DS_Store" >> .gitignore
```
Finnaly, update your Makefile
