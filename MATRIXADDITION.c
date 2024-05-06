

# include <stdio.h>
# include <stdlib.h>


 int main(){

int matrix1[50][50],matrix2[50][50],matrix3[50][50],i,j,row,column;




printf("Enter the Number of Rows\n");
scanf("%d",&row);


printf("Enter The Number Of Columns\n");
scanf("%d",&column);

printf("Enter The First Matrix\n");
//nested loop for geting first matrix

for(i=0;i<row;i++){
    for(j=0;j<column;j++){

      scanf("%d",&matrix1[i][j]);

    }
}


printf("Enter The Second Matrix\n");


//nested loop for getting second matrix

for(i=0;i<row;i++){
    for(j=0;j<column;j++){
        scanf("%d",&matrix2[i][j]);
    }
}



//nested loop for addition

for(i=0;i<row;i++){
    for(j=0;j<column;j++){

        matrix3[i][j]=matrix1[i][j]+matrix2[i][j];

    }
}

//nested loop for print result

printf("The Result Is\n");
printf("\n");



for(i=0;i<row;i++){
    for(j=0;j<column;j++){
        printf("%d\t",matrix3[i][j]);
    }
    printf("\n");
}

return 0;

}
