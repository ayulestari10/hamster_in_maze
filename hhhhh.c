#include <stdio.h>
#include <stdlib.h>
#include "hamster_dalam_maze.h"
#define SIZE 2

 void buat_maze(Maze* m){
    int i, j;

    for(i = 0; i < 2; i++){
        printf("Baris ke-%d :\n", i);
       for(j = 0 ; j < 2  ; j++){
            scanf("%d\t",m->M[i][j]);
       }
        printf("\n");
    }


    printf("\nMaze\n");

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d[%d]%d\t", i,m->M[i][j], j);
        }
        printf("\n");
    }

}

/*

    void DFS_printPreOrder(simpul *root){
        if(root!=NULL){
            stack S;
            createEmptyStack(&S);
            push(root, &S);

            while(isStackEmpty(S) != 1){
                printf("%c ", S.top->elemen->huruf);
                simpul *node = peek(S);
                pop(&S);

                if(node->right != NULL){
                    push(node->right, &S);
                }
                if(node->left != NULL){
                    push(node->left, &S);
                }
            }
            printf("\n");
        }
    }
*/
