a.exe :basecontroller.o basemodel.o baseview.o derview.o dercontroller.o dermodel.o viewcube.o view_sd.o viewbit.o  client.o
		g++ basecontroller.o basemodel.o baseview.o derview.o dercontroller.o dermodel.o viewcube.o view_sd.o viewbit.o client.o
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
viewcube.o :viewcube.cpp viewcube.h
			  g++ -c viewcube.cpp
view_sd.o :	view_sd.cpp view_sd.h
			 g++ -c view_sd.cpp
viewbit.o : viewbit.cpp viewbit.h
			 g++ -c viewbit.cpp
client.o :client.cpp basecontroller.h basemodel.h baseview.h derview.h dercontroller.h dermodel.h viewcube.h view_sd.h viewbit.h
		  g++ -c client.cpp