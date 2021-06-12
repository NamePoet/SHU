#include <stdio.h>
#include <stdlib.h>

struct element{int num; char text[15];};
struct list{int Nb; struct element Tab[600];};

//----------------------------------------------------
// procedure that read the list of 500 words from a file. Each word has a number.
void Read_list(struct list *L)
{
    FILE *fp;
    int k;

    fp=fopen("../data.txt","r");
    (*L).Nb=500;
    for(k=0;k<(*L).Nb;k=k+1)
    {
        fscanf(fp,"%d%s",&(*L).Tab[k].num,(*L).Tab[k].text);
    }
}

//----------------------------------------------------
// procedure to swap 2 items of type struct element
void Swap_elements(struct element E_in1, struct element E_in2, struct element *E_out1, struct element *E_out2)
{
    *E_out1=E_in2;
    *E_out2=E_in1;
}


//##################### YOUR TASK BEGINS THERE ###############################
//----------------------------------------------------
// procedure to sort a list of type struct list
/* Sub-algorithm Ranking_Sort_List
	In : List_in : Type_List2
	Out : List_out : Type_List2
Variables
	index_in_element, scan_index : integer
	nb_smaller : integer
Instructions
	for index_in_element from 1 to List_in.Nb step 1
	    nb_smaller ? 0
	    for scan_index from 1 to List_in.Nb step 1
		if (List_in.Tab[scan_index].ref < List_in.Tab[index_in_element].ref) then
		     nb_smaller ? nb_smaller+1
		endif
	    endfor
	    List_out.Tab[nb_smaller+1] ? List_out.Tab[index_in_element]
	endfor
	List_out.Nb ? List_in.Nb */
//void Ranking_Sort_List... - to be written in C by adapting the above sub-algorithm


//----------------------------------------------------
//procedure to search a word in the list given its number
/*Sub-algorithm Search_Sorted_List
	In : List_in : Type_List2, search_ref : integer
	Out : Found: Boolean, position : integer
Variables :
	 index_begin, index_end, index_mid : integer
Instructions
	Found <-- FALSE
	if List_in.Nb>0 then
		index_begin <-- 1
		index_end <-- List_in.Nb
		while ((index_begin ¡Ü index_end) and (Found=FALSE)) do
			index_mid <-- Integer_Part((index_begin + index_end) /2)
			if List_in.Tab[index_mid].ref = search_ref then
				Found <-- TRUE
				position <-- index_mid
			elseif List_in.Tab[index_mid].ref < search_ref then
				index_begin <--  index_mid+1
			else
				index_end <--  index_mid-1
			endif
		endwhile
	endif   */
//void Search_Sorted_List... - to be written in C by adapting the above sub-algorithm


//----------------------------------------------------
// procedure to display an element on the screen
/*Sub-algorithm display
	In : List_in : Type_List2, index_search_item : integer
	Out : -
Variables : -
Instructions
    write("The word number",List_in.Tab[index_search_item].ref," is : ",List_in.Tab[index_search_item].text)
*/
//void display... - to be written in C by adapting the above sub-algorithm


//----------------------------------------------------
int main(void)
{
    struct list The_list;
    int k, repetition;   // k : dummy variable, repetition : index of the main for loop
    int Found;      // to implement a boolean, true when the searched number is found in the list
    int index_search_item; // entry number of a searched word
    int num_word;       // the number of the searched word

    Read_list(&The_list);
    // Ranking_Sort_List(The_list!The_list) - to be changed to C
    for(repetition=0;repetition<5;repetition=repetition+1)
    {
        printf("enter the integer ID of the word you are looking for (between 1 and 3000) : ");
        scanf("%d",&num_word);
        //Search_Sorted_List(The_list,num_word!Found,index_search_item) - to be changed to C
        if (Found)
        {
            //display(The_list,index_search_item!) - to be changed to C
        }
        else
        {
            printf("The word number %d is not in the list.\n",num_word);
        }
    }
    scanf("%d",&k);
    return 0;
}
