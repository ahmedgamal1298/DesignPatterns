#include "../inc/Repository.h"


Repository::Repository(string& repoPath):m_CurrentPath(repoPath){


}


Employee* Repository::GetUser()const {
	return CurrentUser;
}
void Repository::SetUser(Employee* emp) {
	CurrentUser = emp;
}



void Repository::CreateFile(const string& FileName){


	auto path = m_CurrentPath;
	path /= FileName;

	if (exists(path))
	{
		throw std::runtime_error{ "File already exists" };
	}
	else
	{
		std::ofstream out{ path };
		if (!out.is_open())
		{
			throw std::runtime_error{ "File could not be created" };
		}

		cout << "User " << GetUser()->GetInfo() << " created file " << FileName << endl;
		cout << "Enter data to be written to the File ";
		string data;
		getline(cin, data);
		out << data;
		cout << "File created successfully\n";
	}
}
void Repository::DeleteFile(const string& FileName){

	auto path = m_CurrentPath;
	path /= FileName;

	if (exists(path))
	{
		cout << "User " << GetUser()->GetInfo()<< " is deleting the file" << endl;
		std::filesystem::remove(path);
	}
	else
		throw std::runtime_error{ "File does not exist" };

}
void Repository::UpdateFile(const string& FileName){

	std::filesystem::path path{ m_CurrentPath };
	path /= FileName;
	if (exists(path))
	{
		std::ofstream out{ path, std::ios::app };

		if(!out.is_open())
			throw std::runtime_error{ "File could not be opened" };
		else {
			string data;
			getline(cin, data);
			cout << "User "<<GetUser()->GetInfo() << " is updating the file " << FileName << endl;
			out << "\n##### UPDATE #####\n"<<data;
			cout << "File updated successfully\n";
		}

	}

}
void Repository::ViewFile(const string& FileName) {


	auto path = m_CurrentPath;
	path /= FileName;
	if (!exists(path)) {
		throw std::runtime_error{ "File does not exist" };
	}
	std::ifstream in{ path };
	if (!in.is_open()) {
		throw std::runtime_error{ "Could not open file" };
	}
	cout << GetUser()->GetInfo() << "is viewing a file\n";
	string line;
	while (std::getline(in, line)) {
		cout << line << '\n';
	}

}
