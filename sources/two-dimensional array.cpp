int **p;
	int n = 4;
	int m = 4;
	int i, j;
	
	p = (int **)malloc(n * sizeof(int *));

	for (i = 0; i < n; ++i)
		p[i] = (int *)malloc(m * sizeof(int));


	    for (i = 0; i < n; ++i)
		for (j = 0; j < m; ++j)
			p[i][j] = (i * m) + j + 1;
		for (i = 0; i<n; ++i) {
			for (j = 0; j < m; ++j) 
				printf("%4d", p[i][j]);
		printf_s("\n");
}
			for (i = 0; i<n; ++i)
				free(p[i]);

			free(p);

			system("pause");
            return 0;
}
