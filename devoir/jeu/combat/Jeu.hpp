#ifndef _JEU_HPP_
#define _JEU_HPP_

class Jeu
{
	public:
		virtual void start() = 0;
		virtual void restart() = 0;
		virtual void pause() = 0;
		virtual void quit() = 0;

	protected:
		int gameStatus; // 0 if quit // 1 if play // -1 if pause
};

#endif
