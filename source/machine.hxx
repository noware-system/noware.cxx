#pragma once
////#ifndef __MACHINE
////#define __MACHINE
//
//// Standard:
//#include <string>
//#include <sstream>
//
//// Boost:
////#include <boost/any.hpp>
//#include <boost/asio.hpp>
//#include <boost/bind.hpp>
//#include <boost/thread.hpp>
//#include <boost/thread/mutex.hpp>
//#include <boost/thread/condition_variable.hpp>
//
//// This library:
////#include "Lexical_Analyzer"
//#include "../default.h++"
// #include "name.h++"
// #include "cotainer/null.h++"
////#include "peers.h++"
//#include "../containers/array.h++"
// #include "container/any.hxx"
//#include "../containers/memory.h++"
// #include "container/entity_2.hxx"
//#include "../mathematics.h++"	// "mathematics.h++" should be included after "array.h++" in this "machine.h++" file.
//#include "../machine/resource.h++"
////#include "../machine/resources.h++"
//#include "../machine/resources/memory.h++"
//#include "../machine/resources/processor.h++"
////#include "members.h++"
//// #include "../containers/entity.h++"
////#include "../network/ip/mpi.h++"
// #include "net/mpi.hxx"
// #include "computer.hxx"
////#include "../language/interpreter.h++"
//#include "../communication/messaging.h++"
//#include "../cluster/members.h++"
////#include "../cluster.h++"
//#include "network.h++"
//#include ".machine/header.hxx"
//
////#ifndef NTT
////	#define NTT entity
////#endif

namespace noware
{
	// calculator computer machine robot
	// device
	class machine
	{
		/*
			Resource Sharing (Server)
			Virtual Machine (Client)
			Logic (Applied Usage)
		*/
		
		public:
			//#include ".machine/*.hxx"
			
			machine (void);
			~machine (void);
			
			// do evaluate calculate compute solve perform process execute query enqueue go ok request demand command input
			//const LIB::containers::NAME_V query (const LIB::containers::NAME_V &);
			//const bool evaluate (const LIB::containers::NAME_V &);
		//	const LIB::container::NAME_V evaluate (const LIB::container::NAME_V &);
			
			//computer computer;
			
		// protected:
		public:
			/*LIB::machine::*/device::processor processor;
				//LIB::container::memory memory;
			//	LIB::container::entity_2 memory;
			//LIB::network::mpi mpi;
			
		//public:
		//	#include ".machine/inner footer.hxx"
	};
}

//#include ".machine/footer.hxx"
