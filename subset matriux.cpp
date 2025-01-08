 #include <stdio.h>

    int isElementPresent(int array[], int size, int x);
    int main()
   {
    int size1, size2,i;
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    int array1[size1];
//Elements of 1st array
    printf("Enter the elements of the first array:\n");
    for (i = 0; i < size1; ++i)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    int array2[size2];
//Elemnts of 2nd array
    printf("Enter the elements of the second array:\n");
    for (i = 0; i < size2; ++i)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &array2[i]);
    }
//Checking each element of 2nd array in 1st array
    printf("\nChecking elements of the second array in the first array:\n");
    for (i = 0; i < size2; ++i)
   {
        if (isElementPresent(array1, size1, array2[i]))
   {
            printf("%d is present in the first array.\n", array2[i]);
   }
   else
   {
    printf("%d is not present in the first array.\n", array2[i]);
   }
   }
//Checking subset or not
   int isSubset = 1; // Assume it's a subset until proven otherwise
   for (i = 0; i < size2; ++i)
   {
   if (!isElementPresent(array1, size1, array2[i]))
   {
   isSubset = 0; // If any element of array2 is not present in array1, it's not a subset
   break; // No need to continue checking
    }
    }
    // Print the result
   if (isSubset)
   {
    printf("Array2 is a subset of array1.\n");
   }
   else
   {
    printf("Array2 is not a subset of array1.\n");
   }
//Finding x is in the array 1
   int x;
   printf("Enter the value of x:");
   scanf("%d",&x);
   if(isElementPresent(array1,size1,x))
   {
    printf("\nElement x is present in array 1");
   }
   else
   {
    printf("\nElement x is not in array 1");
   }
//Finding x in array 2
   if(isElementPresent(array2,size2,x))
   {
    printf("\nElement x is present in array 2");
   }
   else
   {
   	printf("\nElement x is not in array 2");
   }
  if(isElementPresent(array1,size1,x) && isElementPresent(array2,size2,x))
  {
  printf("\nx is present in both arrays");
  }
  else
  {
  printf("\nx is not present in both arrays");
  }
  }
//function definition
   int isElementPresent(int array[], int size, int x)
   {
   int i;
   for (i = 0; i < size; ++i)
   {
     if (array[i] == x)
      {
        return 1;
      }
   }
  return 0;
  }
