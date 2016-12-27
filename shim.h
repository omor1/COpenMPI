/*
 * This file is part of COpenMPI.
 *
 * COpenMPI is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * COpenMPI is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <mpi.h>

#define SWIFT_NAME(_name) __attribute__((swift_name(_name)))
#define INLINE static __inline__ __attribute__((always_inline))

#define OMPI_VAR(type, var)						\
	INLINE type var##_f(void) SWIFT_NAME("getter:" #var "()")	\
	{								\
		return var;						\
	}
OMPI_VAR(MPI_Group, MPI_GROUP_NULL);
OMPI_VAR(MPI_Comm, MPI_COMM_NULL);
OMPI_VAR(MPI_Request, MPI_REQUEST_NULL);
OMPI_VAR(MPI_Message, MPI_MESSAGE_NULL);
OMPI_VAR(MPI_Op, MPI_OP_NULL);
OMPI_VAR(MPI_Errhandler, MPI_ERRHANDLER_NULL);
OMPI_VAR(MPI_Info, MPI_INFO_NULL);
OMPI_VAR(MPI_Win, MPI_WIN_NULL);
OMPI_VAR(MPI_File, MPI_FILE_NULL);
OMPI_VAR(MPI_Info, MPI_INFO_ENV);
OMPI_VAR(MPI_Comm, MPI_COMM_WORLD);
OMPI_VAR(MPI_Comm, MPI_COMM_SELF);
OMPI_VAR(MPI_Group, MPI_GROUP_EMPTY);
OMPI_VAR(MPI_Message, MPI_MESSAGE_NO_PROC);
OMPI_VAR(MPI_Op, MPI_MAX);
OMPI_VAR(MPI_Op, MPI_MIN);
OMPI_VAR(MPI_Op, MPI_SUM);
OMPI_VAR(MPI_Op, MPI_PROD);
OMPI_VAR(MPI_Op, MPI_LAND);
OMPI_VAR(MPI_Op, MPI_BAND);
OMPI_VAR(MPI_Op, MPI_LOR);
OMPI_VAR(MPI_Op, MPI_BOR);
OMPI_VAR(MPI_Op, MPI_LXOR);
OMPI_VAR(MPI_Op, MPI_BXOR);
OMPI_VAR(MPI_Op, MPI_MAXLOC);
OMPI_VAR(MPI_Op, MPI_MINLOC);
OMPI_VAR(MPI_Op, MPI_REPLACE);
OMPI_VAR(MPI_Op, MPI_NO_OP);
OMPI_VAR(MPI_Datatype, MPI_DATATYPE_NULL);
OMPI_VAR(MPI_Datatype, MPI_BYTE);
OMPI_VAR(MPI_Datatype, MPI_PACKED);
OMPI_VAR(MPI_Datatype, MPI_CHAR);
OMPI_VAR(MPI_Datatype, MPI_SHORT);
OMPI_VAR(MPI_Datatype, MPI_INT);
OMPI_VAR(MPI_Datatype, MPI_LONG);
OMPI_VAR(MPI_Datatype, MPI_FLOAT);
OMPI_VAR(MPI_Datatype, MPI_DOUBLE);
OMPI_VAR(MPI_Datatype, MPI_LONG_DOUBLE);
OMPI_VAR(MPI_Datatype, MPI_UNSIGNED_CHAR);
OMPI_VAR(MPI_Datatype, MPI_SIGNED_CHAR);
OMPI_VAR(MPI_Datatype, MPI_UNSIGNED_SHORT);
OMPI_VAR(MPI_Datatype, MPI_UNSIGNED_LONG);
OMPI_VAR(MPI_Datatype, MPI_UNSIGNED);
OMPI_VAR(MPI_Datatype, MPI_FLOAT_INT);
OMPI_VAR(MPI_Datatype, MPI_DOUBLE_INT);
OMPI_VAR(MPI_Datatype, MPI_LONG_DOUBLE_INT);
OMPI_VAR(MPI_Datatype, MPI_LONG_INT);
OMPI_VAR(MPI_Datatype, MPI_SHORT_INT);
OMPI_VAR(MPI_Datatype, MPI_2INT);
OMPI_VAR(MPI_Datatype, MPI_UB);
OMPI_VAR(MPI_Datatype, MPI_LB);
OMPI_VAR(MPI_Datatype, MPI_WCHAR);
OMPI_VAR(MPI_Datatype, MPI_LONG_LONG_INT);
OMPI_VAR(MPI_Datatype, MPI_LONG_LONG);
OMPI_VAR(MPI_Datatype, MPI_UNSIGNED_LONG_LONG);
OMPI_VAR(MPI_Datatype, MPI_2COMPLEX);
OMPI_VAR(MPI_Datatype, MPI_2DOUBLE_COMPLEX);
OMPI_VAR(MPI_Datatype, MPI_INT8_T);
OMPI_VAR(MPI_Datatype, MPI_UINT8_T);
OMPI_VAR(MPI_Datatype, MPI_INT16_T);
OMPI_VAR(MPI_Datatype, MPI_UINT16_T);
OMPI_VAR(MPI_Datatype, MPI_INT32_T);
OMPI_VAR(MPI_Datatype, MPI_UINT32_T);
OMPI_VAR(MPI_Datatype, MPI_INT64_T);
OMPI_VAR(MPI_Datatype, MPI_UINT64_T);
OMPI_VAR(MPI_Datatype, MPI_AINT);
OMPI_VAR(MPI_Datatype, MPI_OFFSET);
OMPI_VAR(MPI_Datatype, MPI_C_BOOL);
OMPI_VAR(MPI_Datatype, MPI_C_COMPLEX);
OMPI_VAR(MPI_Datatype, MPI_C_FLOAT_COMPLEX);
OMPI_VAR(MPI_Datatype, MPI_C_DOUBLE_COMPLEX);
OMPI_VAR(MPI_Datatype, MPI_C_LONG_DOUBLE_COMPLEX);
OMPI_VAR(MPI_Datatype, MPI_CXX_BOOL);
OMPI_VAR(MPI_Datatype, MPI_CXX_COMPLEX);
OMPI_VAR(MPI_Datatype, MPI_CXX_FLOAT_COMPLEX);
OMPI_VAR(MPI_Datatype, MPI_CXX_DOUBLE_COMPLEX);
OMPI_VAR(MPI_Datatype, MPI_CXX_LONG_DOUBLE_COMPLEX);
OMPI_VAR(MPI_Datatype, MPI_COUNT);
OMPI_VAR(MPI_Errhandler, MPI_ERRORS_ARE_FATAL);
OMPI_VAR(MPI_Errhandler, MPI_ERRORS_RETURN);
