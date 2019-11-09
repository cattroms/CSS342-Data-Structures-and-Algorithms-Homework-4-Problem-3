long possiblePathsRecursive(int M, int N) {
    if (M==0 || N==0) {
        return 0;
    }

    if (M+N==2) {
        return 1;
    }

    return possiblePathsRecursive(M-1, N) + possiblePathsRecursive(M, N-1);
}

long possiblePathsIterative(int M, int N) {
	
	// If either the width or height is 0, return 0
	if (M == 0 || N == 0) { 
		return 0;
	}

	long retVal = 1;

	// Goes through grid
	for (int i = N; i < (M + N - 1); i++) { 
		// adds all possible paths together
		retVal = retVal * i; 
		retVal = retVal / (i - N + 1);
	}
	return retVal;
}
