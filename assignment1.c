#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

int getDiskFreeSpacePercentage()
{
	DWORD lpSectorsPerCluster,
		lpBytesPerSector,
		lpNumberOfFreeClusters,
		lpTotalNumberOfClusters;

	if (GetDiskFreeSpace(NULL,
		&lpSectorsPerCluster,
		&lpBytesPerSector,
		&lpNumberOfFreeClusters,
		&lpTotalNumberOfClusters))
	{
		return int(double(lpNumberOfFreeClusters) / double(lpTotalNumberOfClusters) * 100.0);
	}
	else
	{
		return 0;
	}
}


int main(void){

    long GetAvailableSpace(const char* path){
    struct statvfs stat;

    if (statvfs(path, &stat) != 0) {

        return -1;
    }
    return stat.f_bsize * stat.f_bavail;
    }

    DWORD dwSectorsPerCluster;
	DWORD dwBytesPerSector;
	DWORD dwFreeClusters;
	DWORD dwTotalClusters;

    int test = dwBytesPerSector * dwSectorsPerCluster / 1024;

    char msgResultat01[] = "- Espace libre : ";
    char msgResultat02[] = "- Espace total : ";

    int free_storage = test * dwFreeClusters / 1024;
    int total_storage = test * dwTotalClusters / 1024;

    char char_free_storage[8];
    

    write(STDOUT_FILENO, mb, sizeof(mb)-1);

    char char_total_storage[8];

    write(STDOUT_FILENO, mb, sizeof(mb)-1);

    int i, c=0;
    for (i=0; i<1000000000; i++){
        c++;
    }

    int solutionTime = 5000; 
	int timer;
	int counter = 0;
	DWORD interval = 20;	

	DWORD start = GetTickCount(); 

	for (timer = 0; timer < solutionTime; timer+=interval)
	{
		wait(interval);
		counter++;
	}

	DWORD end = GetTickCount(); 

	// Integration de C++
	cout << "\n" << timer << "\n"<< counter << "\n";
	
	cout << (end - start); 
	
	char temp[99];
	cin >> temp;

    printf ("\n");
    char msg01[] = "PID de processus  : ";
    int pid = getpid();

    char char_pid[6];

    printf ("\n");

    char msg02[] = "Username : ";
    char username[6];
    DWORD username_len = UNLEN+1;
    GetUserName(username, &username_len);
    
    return EXIT_SUCCESS;
}

