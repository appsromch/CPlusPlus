#pragma once
#include "tetrimino.h"

#define Z_X 5

ref class Z :
public Tetrimino
	{
	public:
		Z(Color color, Grid^ grid, Grid^ preview);
		virtual void rotate(array<Point>^ temp) override;
	};
