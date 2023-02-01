function memory_usage() {
        # Display used, total, and percentage of memory using the free command.
        read used total <<< free -m | awk '/Mem/{printf $2" "$3}'
        # Calculate the percentage of memory used with bc.
        # percent=$(bc -l <<< "100 * $total / $used")
        # Feed the variables into awk and print the values with formating.
        awk -v u=$used -v t=$total  'BEGIN {printf "%sMi/%sMi", t, u}'
}
function main(){
	memory_usage
}
main
