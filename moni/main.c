#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}


// procedure to sort a list of type struct list
void Ranking_Sort_List(struct list Type_List2)
        {
            int index_in_element, scan_index;
            int nb_smaller;
            for (index_in_element = 1; index_in_element<= List_in.Nb ;index_in_element++) {
                nb_smaller = 0;
                for (scan_index = 1; scan_index <= List_in.NB)
            }

            return struct list Type_List2;
        }



	In : List_in : Type_List2
	Out : List_out : Type_List2
Variables
	index_in_element, scan_index : integer
	nb_smaller : integer
Instructions
	for index_in_element from 1 to List_in.Nb step 1
	    nb_smaller  0
	    for scan_index from 1 to List_in.Nb step 1
		if (List_in.Tab[scan_index].ref < List_in.Tab[index_in_element].ref) then
		     nb_smaller  nb_smaller+1
		endif
	    endfor
	    List_out.Tab[nb_smaller+1]  List_out.Tab[index_in_element]
	endfor
	List_out.Nb  List_in.Nb */
//void Ranking_Sort_List... - to be written in C by adapting the above sub-algorithm