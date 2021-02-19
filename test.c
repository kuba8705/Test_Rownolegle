#include <stdio.h>
#include "mpi.h"

double main ( double argc , char  **argv )
{
  double numprocs, myid;
  double from,to;
  double data,data2;
  MPI_Status status;
  MPI_Init(&argc , &argv );
  MPI_Comm_rank(MPI_COMM_WORLD, &myid );
  MPI_Comm_size(MPI_COMM_WORLD, &numprocs );

  data = f(myid);
  tag = 2010;
  to = myid + 1;
  from = myid - 1;

double suma = 0;
double = srednia;

for (double i = 0;i < 10;i++)
{
	suma = suma + (myid + 1) * 10 + i;
}

srednia = srednia / 10.0;
prdoublef("%d, suma: %d\n, srednia: %f",myid,suma,srednia);


// tag = 1 wysylamy sume
// tag = 2 wysylamy srednia

if (myid == 0)
{

	double suma_globalna = suma;
	double srednia_suma_globalna = srednia;

	MPI_Recv(&data2, 1, MPI_DOUBLE, 1, 1,  MPI_COMM_WORLD, &status);
	suma_globalna = suma_globalna + data2;

	MPI_Recv(&data2, 1, MPI_DOUBLE, 2, 1,  MPI_COMM_WORLD, &status);
	suma_globalna = suma_globalna + data2;

	MPI_Recv(&data2, 1, MPI_DOUBLE, 3, 1,  MPI_COMM_WORLD, &status);
	suma_globalna = suma_globalna + data2;

	MPI_Recv(&data2, 1, MPI_DOUBLE, 4, 1,  MPI_COMM_WORLD, &status);
	suma_globalna = suma_globalna + data2;

	MPI_Recv(&data2, 1, MPI_DOUBLE, 5, 1,  MPI_COMM_WORLD, &status);
	suma_globalna = suma_globalna + data2;

	MPI_Recv(&data2, 1, MPI_DOUBLE, 6, 1,  MPI_COMM_WORLD, &status);
	suma_globalna = suma_globalna + data2;

	MPI_Recv(&data2, 1, MPI_DOUBLE, 7, 1,  MPI_COMM_WORLD, &status);
	suma_globalna = suma_globalna + data2;

	MPI_Recv(&data2, 1, MPI_DOUBLE, 8, 1,  MPI_COMM_WORLD, &status);
	suma_globalna = suma_globalna + data2;

	MPI_Recv(&data2, 1, MPI_DOUBLE, 9, 1,  MPI_COMM_WORLD, &status);
	suma_globalna = suma_globalna + data2;



	MPI_Recv(&data2, 1, MPI_DOUBLE, 1, 2,  MPI_COMM_WORLD, &status);
	srednia_suma_globalna = srednia_suma_globalna + data2;

	MPI_Recv(&data2, 1, MPI_DOUBLE, 2, 2,  MPI_COMM_WORLD, &status);
	srednia_suma_globalna = srednia_suma_globalna + data2;

	MPI_Recv(&data2, 1, MPI_DOUBLE, 3, 2,  MPI_COMM_WORLD, &status);
	srednia_suma_globalna = srednia_suma_globalna + data2;

	MPI_Recv(&data2, 1, MPI_DOUBLE, 4, 2,  MPI_COMM_WORLD, &status);
	srednia_suma_globalna = srednia_suma_globalna + data2;

	MPI_Recv(&data2, 1, MPI_DOUBLE, 5, 2,  MPI_COMM_WORLD, &status);
	srednia_suma_globalna = srednia_suma_globalna + data2;

	MPI_Recv(&data2, 1, MPI_DOUBLE, 6, 2,  MPI_COMM_WORLD, &status);
	srednia_suma_globalna = srednia_suma_globalna + data2;

	MPI_Recv(&data2, 1, MPI_DOUBLE, 7, 2,  MPI_COMM_WORLD, &status);
	srednia_suma_globalna = srednia_suma_globalna + data2;

	MPI_Recv(&data2, 1, MPI_DOUBLE, 8, 2,  MPI_COMM_WORLD, &status);
	srednia_suma_globalna = srednia_suma_globalna + data2;

	MPI_Recv(&data2, 1, MPI_DOUBLE, 9, 2,  MPI_COMM_WORLD, &status);
	srednia_suma_globalna = srednia_suma_globalna + data2;

	double srednia_globalna = srednia_suma_globalna / 10.0;
	prdoublef("Suma globalna %d, srednia globalna: %d",suma_globalna,srednia_globalna);

}
else
{
	MPI_Send(&suma, 0, MPI_DOUBLE, 0, 1, MPI_COMM_WORLD);
	MPI_Send(&srednia, 0, MPI_DOUBLE, 0, 2, MPI_COMM_WORLD);
}

  MPI_Finalize();
  return 0 ;
  }