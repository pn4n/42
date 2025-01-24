SHELL=~/.zshrc

# Function to add alias if it doesn't already exist
add_alias() {
    if ! grep -q "alias $1=" $SHELL; then
        echo "alias $1='$2'" >> $SHELL
        echo "Alias '$1' added."
    else
        echo "Alias '$1' already exists."
    fi
}

add_alias rt '~/42/runtest'
add_alias norm '~/42/norm'

printf "
Usage:
	rt <file.c>		run test for <file.c>
	rt			run tests for every .c file in the current dir and subdirs

	norm			run notminette for every .c and .h file in current dir
		-s		make backup for every file before norminetting

"
