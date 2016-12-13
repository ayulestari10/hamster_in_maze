#include <stdio.h>
#include <stdlib.h>
#include "hamster_dalam_maze.h"

 void buat_maze(){
    int i, j; int maze[6][6];

    for(i = 0; i < 6; i++){
        printf("Baris ke-%d :\n", i);
       for(j = 0 ; j < 6  ; j++){
            scanf("%d",&maze[i][j]);
       }
        printf("\n");
    }

    maze[6][2] = 'M';

    printf("\nMaze\n");

    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            printf("%d\t", maze[i][j]);
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
