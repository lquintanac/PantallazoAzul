#include "Fondo.h"

void Fondo::SetLvl1()
{
	Plataforma* aux = new Plataforma(130, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(260, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(320, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(350, 40);
	plataformas.agregar(aux);
	aux = new Plataforma(330, 60);
	plataformas.agregar(aux);
	aux = new Plataforma(370, 60);
	plataformas.agregar(aux);
	aux = new Plataforma(390, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(430, 40, 40);
	plataformas.agregar(aux);
	aux = new Plataforma(490, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(590, 40);
	plataformas.agregar(aux);
	aux = new Plataforma(630, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(550, 60);
	plataformas.agregar(aux);
	aux = new Plataforma(730, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(720, 40);
	plataformas.agregar(aux);
	aux = new Plataforma(730, 60);
	plataformas.agregar(aux);
	
	Queso* auxq = new Queso(-10, 21);
	quesos.agregar(auxq);
	auxq = new Queso(340, 61);
	quesos.agregar(auxq);
	auxq = new Queso(460, 41);
	quesos.agregar(auxq);
	auxq = new Queso(560, 61);
	quesos.agregar(auxq);
	auxq = new Queso(740, 61);
	quesos.agregar(auxq);

	Trampa* auxt = new Trampa(240, 0);
	bombas.agregar(auxt);
	auxt = new Trampa(380, 61);
	bombas.agregar(auxt);
	auxt = new Trampa(420, 0);
	bombas.agregar(auxt);
	auxt = new Trampa(570, 41);
	bombas.agregar(auxt);
	auxt = new Trampa(560, 0);
	bombas.agregar(auxt);
	auxt = new Trampa(740, 0);
	bombas.agregar(auxt);

	for (int i = 1; i <= 4; i++)
	{
		Vida* auxv = new Vida(40-12*i, 70);
		vidas.agregar(auxv);
	}
}
void Fondo::SetLvl2()
{
	Plataforma* aux = new Plataforma(130, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(260, 20);
	plataformas.agregar(aux);

	Queso* auxq = new Queso(140, 0);
	quesos.agregar(auxq);
	auxq = new Queso(340, 0);
	quesos.agregar(auxq);
	auxq = new Queso(460, 0);
	quesos.agregar(auxq);
	auxq = new Queso(560, 0);
	quesos.agregar(auxq);
	auxq = new Queso(740, 0);
	quesos.agregar(auxq);

	for (int i = 1; i <= 4; i++)
	{
		Vida* auxv = new Vida(40 - 12 * i, 70);
		vidas.agregar(auxv);
	}
}
void Fondo::SetLvl3()
{
	Plataforma* aux = new Plataforma(130, 20);
	plataformas.agregar(aux);

	Queso* auxq = new Queso(140, 0);
	quesos.agregar(auxq);
	auxq = new Queso(340, 0);
	quesos.agregar(auxq);
	auxq = new Queso(460, 0);
	quesos.agregar(auxq);
	auxq = new Queso(560, 0);
	quesos.agregar(auxq);
	auxq = new Queso(740, 0);
	quesos.agregar(auxq);

	for (int i = 1; i <= 4; i++)
	{
		Vida* auxv = new Vida(40 - 12 * i, 70);
		vidas.agregar(auxv);
	}
}
void Fondo::SetLvl4()
{
	Plataforma* aux = new Plataforma(0, 20, 30);
	plataformas.agregar(aux);
	aux = new Plataforma(35, 30, 30);
	plataformas.agregar(aux);
	aux = new Plataforma(70, 40, 30);
	plataformas.agregar(aux);
	aux = new Plataforma(105, 50, 30);
	plataformas.agregar(aux);
	aux = new Plataforma(140, 60, 30);
	plataformas.agregar(aux);

	Queso* auxq = new Queso(25, 21);
	quesos.agregar(auxq);
	auxq = new Queso(60, 31);
	quesos.agregar(auxq);
	auxq = new Queso(95, 41);
	quesos.agregar(auxq);
	auxq = new Queso(130, 51);
	quesos.agregar(auxq);
	auxq = new Queso(165, 61);
	quesos.agregar(auxq);

	for (int i = 1; i <= 4; i++)
	{
		Vida* auxv = new Vida(40 - 12 * i, 70);
		vidas.agregar(auxv);
	}
}

void Fondo::PintarLvl1() {
	//AQUI SE PINTA LAS PLATAFORMAS

	plataformas.Dibuja();
	quesos.Dibuja();
	bombas.Dibuja();
	vidas.Dibuja();
	//AQUI SE PINTA LA PARED DEL PRINCIPIO
	glBegin(GL_POLYGON);
	glColor3ub(20, 60, 32);
	glVertex3f(-150, -10, 1);
	glColor3ub(20, 60, 32);
	glVertex3f(-150, 90, 1);
	glColor3ub(20, 60, 32);
	glVertex3f(-80, 90, 1);
	glColor3ub(20, 60, 32);
	glVertex3f(-80, -10, 1);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(20, 60, 32);
	glVertex3f(-80, -10, 1);
	glColor3ub(20, 60, 32);
	glVertex3f(-80, -10, -10);
	glColor3ub(20, 60, 32);
	glVertex3f(-80, 90, -10);
	glColor3ub(20, 60, 32);
	glVertex3f(-80, 90, 1);
	glEnd();
	//AQUI SE PINTA LA PARED FINAL
	glBegin(GL_POLYGON);
	glColor3ub(20, 32, 64);
	glVertex3f(800, -10, -10);
	glColor3ub(20, 32, 64);
	glVertex3f(800, 90, -10);
	glColor3ub(20, 32, 64);
	glVertex3f(880, 90, -10);
	glColor3ub(20, 32, 64);
	glVertex3f(880, -10, -10);
	glEnd();

	//AQUI SE PINTA EL FONDO

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/FondoSalon.png").id);
	glDisable(GL_LIGHTING);
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glTexCoord2d(0, 0); glVertex3f(-80, 87, -10);
	glTexCoord2d(1, 0); glVertex3f(800, 87, -10);
	glTexCoord2d(1, 1); glVertex3f(800, -10, -10);
	glTexCoord2d(0, 1); glVertex3f(-80, -10, -10);
	glEnd();
	glEnable(GL_LIGHTING);
	glDisable(GL_TEXTURE_2D);
}

void Fondo::PintarLvl2()
{
	plataformas.Dibuja();
	quesos.Dibuja();
	bombas.Dibuja();
	vidas.Dibuja();
	//AQUI SE PINTA EL FONDO
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/FondoDormitorio.png").id);
	glDisable(GL_LIGHTING);
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glTexCoord2d(0, 0); glVertex3f(-80, 87, -10);
	glTexCoord2d(1, 0); glVertex3f(800, 87, -10);
	glTexCoord2d(1, 1); glVertex3f(800, -10, -10);
	glTexCoord2d(0, 1); glVertex3f(-80, -10, -10);
	glEnd();
	glEnable(GL_LIGHTING);
	glDisable(GL_TEXTURE_2D);
	//AQUI SE PINTA LA PARED DEL PRINCIPIO
	glBegin(GL_POLYGON);
	glColor3ub(20, 60, 32);
	glVertex3f(-150, -10, 1);
	glColor3ub(20, 60, 32);
	glVertex3f(-150, 90, 1);
	glColor3ub(20, 60, 32);
	glVertex3f(-80, 90, 1);
	glColor3ub(20, 60, 32);
	glVertex3f(-80, -10, 1);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(20, 60, 32);
	glVertex3f(-80, -10, 1);
	glColor3ub(20, 60, 32);
	glVertex3f(-80, -10, -10);
	glColor3ub(20, 60, 32);
	glVertex3f(-80, 90, -10);
	glColor3ub(20, 60, 32);
	glVertex3f(-80, 90, 1);
	glEnd();
	//AQUI SE PINTA LA PARED FINAL
	glBegin(GL_POLYGON);
	glColor3ub(20, 32, 64);
	glVertex3f(800, -10, -10);
	glColor3ub(20, 32, 64);
	glVertex3f(800, 90, -10);
	glColor3ub(20, 32, 64);
	glVertex3f(880, 90, -10);
	glColor3ub(20, 32, 64);
	glVertex3f(880, -10, -10);
	glEnd();
}
void Fondo::PintarLvl3()
{
	plataformas.Dibuja();
	quesos.Dibuja();
	bombas.Dibuja();
	vidas.Dibuja();
	//AQUI SE PINTA EL FONDO
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/FondoCocina.png").id);
	glDisable(GL_LIGHTING);
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glTexCoord2d(0, 0); glVertex3f(-80, 87, -10);
	glTexCoord2d(1, 0); glVertex3f(800, 87, -10);
	glTexCoord2d(1, 1); glVertex3f(800, -10, -10);
	glTexCoord2d(0, 1); glVertex3f(-80, -10, -10);
	glEnd();
	glEnable(GL_LIGHTING);
	glDisable(GL_TEXTURE_2D);
	//AQUI SE PINTA LA PARED DEL PRINCIPIO
	glBegin(GL_POLYGON);
	glColor3ub(20, 60, 32);
	glVertex3f(-150, -10, 1);
	glColor3ub(20, 60, 32);
	glVertex3f(-150, 90, 1);
	glColor3ub(20, 60, 32);
	glVertex3f(-80, 90, 1);
	glColor3ub(20, 60, 32);
	glVertex3f(-80, -10, 1);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(20, 60, 32);
	glVertex3f(-80, -10, 1);
	glColor3ub(20, 60, 32);
	glVertex3f(-80, -10, -10);
	glColor3ub(20, 60, 32);
	glVertex3f(-80, 90, -10);
	glColor3ub(20, 60, 32);
	glVertex3f(-80, 90, 1);
	glEnd();
	//AQUI SE PINTA LA PARED FINAL
	glBegin(GL_POLYGON);
	glColor3ub(20, 32, 64);
	glVertex3f(800, -10, -10);
	glColor3ub(20, 32, 64);
	glVertex3f(800, 90, -10);
	glColor3ub(20, 32, 64);
	glVertex3f(880, 90, -10);
	glColor3ub(20, 32, 64);
	glVertex3f(880, -10, -10);
	glEnd();
}
void Fondo::PintarLvl4()
{
	plataformas.Dibuja();
	quesos.Dibuja();
	bombas.Dibuja();
	vidas.Dibuja();
	//AQUI SE PINTA EL FONDO
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/FondoFinal.png").id);
	glDisable(GL_LIGHTING);
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glTexCoord2d(0, 0); glVertex3f(-80, 87, -10);
	glTexCoord2d(1, 0); glVertex3f(214, 87, -10);
	glTexCoord2d(1, 1); glVertex3f(214, -10, -10);
	glTexCoord2d(0, 1); glVertex3f(-80, -10, -10);
	glEnd();
	glEnable(GL_LIGHTING);
	glDisable(GL_TEXTURE_2D);
	//AQUI SE PINTA LA PARED DEL PRINCIPIO
	glBegin(GL_POLYGON);
	glColor3ub(20, 60, 32);
	glVertex3f(-150, -10, 1);
	glColor3ub(20, 60, 32);
	glVertex3f(-150, 90, 1);
	glColor3ub(20, 60, 32);
	glVertex3f(-80, 90, 1);
	glColor3ub(20, 60, 32);
	glVertex3f(-80, -10, 1);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(20, 60, 32);
	glVertex3f(-80, -10, 1);
	glColor3ub(20, 60, 32);
	glVertex3f(-80, -10, -10);
	glColor3ub(20, 60, 32);
	glVertex3f(-80, 90, -10);
	glColor3ub(20, 60, 32);
	glVertex3f(-80, 90, 1);
	glEnd();
	//AQUI SE PINTA LA PARED FINAL
	glBegin(GL_POLYGON);
	glColor3ub(20, 32, 64);
	glVertex3f(214, -10, -10);
	glColor3ub(20, 32, 64);
	glVertex3f(214, 90, -10);
	glColor3ub(20, 32, 64);
	glVertex3f(294, 90, -10);
	glColor3ub(20, 32, 64);
	glVertex3f(294, -10, -10);
	glEnd();
}
void Fondo::Mueve(float _t)
{
	vidas.Mueve(_t);
}