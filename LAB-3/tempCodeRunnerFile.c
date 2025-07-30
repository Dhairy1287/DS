 for(i=0;i<n; i++) {
        printf("Enter name %d:", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = 0;
    }