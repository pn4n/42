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
	rt <file> \t run test for <file>
	norm <file> \t run notminette for <file>
"
