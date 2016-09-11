class Question1
{
  // In this question, the goal is to generate a word
  // from the given sentence.
  public static void main(String[] args)
  {
    String sentence ="keep calm and carry on", output="";
	int[] key = {3,6,11,12,15};
	int keyIndex = 0, loopCounter=0; 
	while(keyIndex<5)
	{
	  if( key[keyIndex] == loopCounter )
	  {
	    output = output + sentence.charAt(loopCounter);
		keyIndex++;
	  }
	  loopCounter++;
	}
	// Please note that output will not be a non-sense random string but a meaningful word
	System.out.println(output);
  }
}