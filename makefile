a.exe :basecontroller.o basemodel.o baseview.o derview.o dercontroller.o dermodel.o client.o
		g++ basecontroller.o basemodel.o baseview.o derview.o dercontroller.o dermodel.o client.o
basemodel.o : basemodel.cpp basemodel.h
			  g++ -c basemodel.cpp 
basecontroller.o : basecontroller.cpp basecontroller.h
			  g++ -c basecontroller.cpp 
baseview.o :baseview.cpp baseview.h
			  g++ -c baseview.cpp 
dermodel.o : dermodel.cpp dermodel.h
			  g++ -c dermodel.cpp 
dercontroller.o : dercontroller.cpp dercontroller.h
			  g++ -c dercontroller.cpp 
derview.o : derview.cpp derview.h
			  g++ -c derview.cpp 
client.o :client.cpp basecontroller.h basemodel.h baseview.h derview.h dercontroller.h dermodel.h
		  g++ -c client.cpp