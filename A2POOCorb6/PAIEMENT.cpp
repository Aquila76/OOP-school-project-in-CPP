#include "PAIEMENT.h"

namespace NS_Composants
{
	PAIEMENT::PAIEMENT(void)
	{

		this->ID_PAIEMENT = -1;
		this->DATE_PAIEMENT = "RIEN";
		this->MONTANT_PAIEMENT = "RIEN";

	}
	String^ PAIEMENT::SELECT(void)
	{
		return "SELECT ID_PAIEMENT, DATE_PAIEMENT, MONTANT_PAIEMENT" +
			"FROM PAIEMENT;";
	}
	String^ PAIEMENT::INSERT(void)
	{
		return "INSERT INTO PAIEMENT " +
			"(DATE_PAIEMENT, MONTANT_PAIEMENT) " +
			"VALUES('" + this->getDATE_PAIEMENT() + "', '" + this->getMONTANT_PAIEMENT() + "');SELECT @@IDENTITY;";
	}
	String^ PAIEMENT::UPDATE(void)
	{
		return "UPDATE PAIEMENT " +
			"SET DATE_PAIEMENT = '" + this->getDATE_PAIEMENT() + "', '" + this->getMONTANT_PAIEMENT() + "'  " +

			"WHERE(ID_PAIEMENT = " + this->getID_PAIEMENT() + ");";
	}

	String^ PAIEMENT::DELETE(void)
	{
		return "DELETE FROM PAIEMENT " +
			"WHERE(ID_PAIEMENT = " + this->getID_PAIEMENT() + ");";
	}

	void PAIEMENT::setID_PAIEMENT(int ID_PAIEMENT)
	{
		if (ID_PAIEMENT > 0)
		{
			this->ID_PAIEMENT = ID_PAIEMENT;
		}
	}

	void PAIEMENT::setDATE_PAIEMENT(String^ DATE_PAIEMENT)
	{
		if (DATE_PAIEMENT != "")
		{
			this->DATE_PAIEMENT = DATE_PAIEMENT;
		}
	}
	void PAIEMENT::setMONTANT_PAIEMENT(String^ MONTANT_PAIEMENT)
	{
		if (MONTANT_PAIEMENT != "")
		{
			this->MONTANT_PAIEMENT = MONTANT_PAIEMENT;
		}
	}


	int PAIEMENT::getID_PAIEMENT(void)
	{

		return this->ID_PAIEMENT;

	}


	String^ PAIEMENT::getDATE_PAIEMENT(void)
	{
		return this->DATE_PAIEMENT;
	}

	String^ PAIEMENT::getMONTANT_PAIEMENT(void)
	{
		return this->MONTANT_PAIEMENT;
	}


}