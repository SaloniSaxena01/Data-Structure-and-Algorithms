# Sparse Matrix

Sparse matrix is a matrix in which there are more number of zero elements than non-zero elements. So, for saving space and processing time, we store only non-zero elements.

There are two methods for this :
* Coordinate List / 3-column representation
* Compressed Sparse Row

## Coordinate List

For every non-zero element, we need three things, row number, column number and the element itself. So we will have a touple of three values, we can represent them in form of three columns.

We use first row to store dimensions of the matrix as well as the number of non-zero elements.

## Compressed Sparse Row

Sparsed Matrix is represented using three arrays. First lists non-zero elements, second array for rows with starting value 0 and then the cummulative the number of non-zero elements as present in the row and third array representing the column number corresponding to the element in first array.
