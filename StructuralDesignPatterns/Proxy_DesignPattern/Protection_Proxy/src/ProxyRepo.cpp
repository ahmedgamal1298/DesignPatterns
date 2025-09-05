#include "../inc/ProxyRepo.h"
#include <stdexcept>

ProxyRepo::ProxyRepo(const string CurrentPath) :repo{ new Repository{const_cast<string&>(CurrentPath)} } {
}

void ProxyRepo::CreateFile(const string& FileName){

	if ( IsAuthorized() )
		repo->CreateFile(FileName);
	else
		throw std::runtime_error("Access Denied to Create this file\n");

}
void ProxyRepo::DeleteFile(const string& FileName){
	if (IsAuthorized())
		repo->DeleteFile(FileName);
	else
		throw std::runtime_error("Access Denied to delete this file\n");
}
void ProxyRepo::UpdateFile(const string& FileName) {

	if (IsAuthorized())
		repo->UpdateFile(FileName);
	else
		throw std::runtime_error("Access Denied to update this file\ns");
}
void ProxyRepo::ViewFile(const string& FileName) {
	if (IsAuthorized())
		repo->ViewFile(FileName);
	else
		throw std::runtime_error("Access Denied to view this file\n");

}
void ProxyRepo::SetGroupOfAuthorizedList(initializer_list<string>emps) {
	//assign used to override the contents of a vector with new values
	m_AuthorizedRoles.assign(emps);
}
void ProxyRepo::SetNewEmployeeToAuthorizedList(string emp) {
	m_AuthorizedRoles.emplace_back(emp);
}

Repository* ProxyRepo::GetRepo()const {
	return repo;
}