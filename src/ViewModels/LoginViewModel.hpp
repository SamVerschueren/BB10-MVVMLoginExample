/*
 * LoginViewModel.hpp
 *
 * The header file for the LoginViewModel. This provides the contract for the
 * implementation of the ViewModel.
 *
 * Created on: 11-feb.-2013
 * Author: Sam Verschueren		<sam.verschueren@gmail.com>
 */

#ifndef LOGINVIEWMODEL_HPP_
#define LOGINVIEWMODEL_HPP_

#include <QObject>

class LoginViewModel : public QObject {
	Q_OBJECT

	Q_PROPERTY(QString message READ getMessage NOTIFY messageChanged FINAL)
	Q_PROPERTY(QString username READ getUsername WRITE setUsername NOTIFY usernameChanged FINAL)
	Q_PROPERTY(QString password READ getPassword WRITE setPassword NOTIFY passwordChanged FINAL)

	Q_SIGNALS:
		void messageChanged(QString message);
		void usernameChanged(QString username);
		void passwordChanged(QString password);

	private:
		QString message;
		QString username;
		QString password;

	public:
		LoginViewModel(QObject *parent = 0) : QObject(parent) { }

		QString getMessage();
		void setMessage(QString message);

		QString getUsername();
		void setUsername(QString username);

		QString getPassword();
		void setPassword(QString password);

		Q_INVOKABLE void login();
};

#endif /* LOGINVIEWMODEL_HPP_ */
