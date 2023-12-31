#include <bits/stdc++.h>
using namespace std;

void implimentBestFit(int blockSize[], int blocks, int processSize[], int proccesses)
{
    // This will store the block id of the allocated block to a process
    int allocation[proccesses];
    int occupied[blocks];

    // initially assigning -1 to all allocation indexes
    // means nothing is allocated currently
    for(int i = 0; i < proccesses; i++){
        allocation[i] = -1;
    }

    for(int i = 0; i < blocks; i++){
        occupied[i] = 0;
    }

    // pick each process and find suitable blocks
    // according to its size ad assign to it
    for (int i = 0; i < proccesses; i++)
    {

        int indexPlaced = -1;
        for (int j = 0; j < blocks; j++) {
            if (blockSize[j] >= processSize[i] && !occupied[j])
            {
                // place it at the first block fit to accomodate process
                if (indexPlaced == -1)
                    indexPlaced = j;

                // if any future block is smalller than the current block where
                // process is placed, change the block and thus indexPlaced
		// this reduces the wastage thus best fit
                else if (blockSize[j] < blockSize[indexPlaced])
                    indexPlaced = j;
            }
        }

        // If we were successfully able to find block for the process
        if (indexPlaced != -1)
        {
            // allocate this block j to process p[i]
            allocation[i] = indexPlaced;

            // make the status of the block as occupied
            occupied[indexPlaced] = 1;
        }
    }

    printf("\nProcess No.\t\tProcess Size\tBlock no.\n");
    for (int i = 0; i < proccesses; i++)
    {
        cout<< i+1<<  "\t\t\t"<<processSize[i]<<"\t\t";
        if (allocation[i] != -1)
          cout<<allocation[i] + 1<<endl;
        else
            cout<<"Not Allocated\n";
    }
}

// Driver code
int main()
{
    int blockSize[] = {100, 50, 30, 120, 35};
    int processSize[] = {40, 10, 30, 60};
    int blocks = sizeof(blockSize)/sizeof(blockSize[0]);
    int proccesses = sizeof(processSize)/sizeof(processSize[0]);

    implimentBestFit(blockSize, blocks, processSize, proccesses);

    return 0 ;
}
