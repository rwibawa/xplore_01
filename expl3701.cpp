#include <iostream>

class work
{
public:
	work() = default;
	work(work const&) = default;
	work(std::string const& id, std::string const& title)
		: id_{id}, title_{title}
		{}

	std::string const& id()			const { return id_; }
	std::string const& title()	const { return title_; }

private:
	std::string id_;
	std::string title_;
};

class book : public  work
{
public:
	book() : work(), pubyear_{} {}
	book(book const&) = default;
	book(std::string const& id, std::string const& title, std::string const& author, int pubyear)
		: work(id, title), pubyear_{}
		{}

	std::string const& author()	const { return author_; }
	int pubyear()								const { return pubyear_; }

private:
	std::string author_;
	int pubyear_;	///< year of publication
};


class periodical : public work
{
public:
	periodical() : work(), volume_{0}, number_{0}, date_{} {}
	periodical(periodical const&) = default;
	periodical(std::string const& id, std::string const& title, int volume, int number, std::string const& date)
		: work(id, title), volume_{}, number_{}, date_{}
		{}

	int volume()	const { return volume_; }
	int number()	const { return number_; }
	std::string const& date()	const { return date_; }

private:
	int volume_;				///< volume member
	int number_;				///< issue number
	std::string date_;	///< publication date
};


int main()
{
	book book1("1", "Linux Bible", "Linux Torvald", 1994);
	periodical prd1{};
}
