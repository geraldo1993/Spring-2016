class Question3
{
  public static void main(String[] args)
  {
    int[][] matrix = new int[4][5];

	for(int row=0; row<matrix.length; row++ )
	{
	   for(int col=0; col < matrix[row].length; col++ )
	   {
	     matrix[row][col] = 10*(row+1)+(col+1);
		System.out.print( matrix[row][col] + " ");
	   }
	   System.out.println();
	}
	
  }
}