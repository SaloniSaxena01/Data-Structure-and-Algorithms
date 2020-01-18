# Matrices

## Diagonal Matrices
Diagonal Matrix is a matrix where all elements other than diagonal must be zero.

> As all other elements are zero, then we need not to take two dimentions to store the matrix, then the storing 0's is just a wastage of memory.

## Lower and Upper Triangular Matrices

**Lower Triangular matrix** is a square matrix in which the lower triangular part of matrix is non-zero elements and upper triangular part is zero.

We can define it as
* m[i,j] = 0 if i<j
* m[i,j] = non-zero if i>=j

**Upper Triangular matrix** is a square matrix in which the upper triangular part of matrix is non-zero elements and lower triangular part is zero.

We can define it as
* m[i,j] = 0 if i>j
* m[i,j] = non-zero if i<=j

### Lower and Upper Triangular Matrices formulaes
In lower and upper triangular matrices the row major and column major formulaes are interchanged, rest remains same so there is no coding for upper triangular matrix.

## Symmetric Matrix

A matrix is said to be symmitric if m[i,j] = m[j,i]. i.e. Diagonal forms the mirror image of the elements. So only storing lower or upper triangular part will be sufficient.

## Tri-Diagonal Matrix

A matrix is said to be tri diagonal if m[i,j] is non-zero if |i-j|<=1. All other elements are zero.

## Toeplitz Matrix

If elements in all diagonals are same then the matrix is said to be toeplitz.

We can define it as :
* m[i,j] = m[i-1,j-1]
