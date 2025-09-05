#pragma once
#include "../inc/Storage.h"
#include "../inc/Repository.h"

#include <vector>
#include <string>
#include <algorithm>

using std::string;
using std::vector;
using std::any_of;
// it's a fixed size array that is used for readoly purposes and can be passed to a function as a parameter 
// to act as variable number of arguments of the same type 
using std::initializer_list;

using std::initializer_list;
class ProxyRepo :
    public Storage
{
	Repository* repo;
	std::vector<std::string> m_AuthorizedRoles;
    // Change the parameter of IsAuthorized from 'string&' to 'const string&'
    bool IsAuthorized() {
        return any_of(m_AuthorizedRoles.begin(), m_AuthorizedRoles.end(), [this](const string& authorizedRole) {
            return repo->GetUser()->GetRole() == authorizedRole;
        });
    }
public:
	ProxyRepo(const string CurrentPath);
	virtual void CreateFile(const string& FileName) override;
	virtual void DeleteFile(const string& FileName) override;
	virtual void UpdateFile(const string& FileName) override;
	virtual void ViewFile(const string& FileName) override;
	Repository* GetRepo()const;
	void SetGroupOfAuthorizedList(initializer_list<string>);
	void SetNewEmployeeToAuthorizedList(string emp);
	virtual ~ProxyRepo() = default;
};

