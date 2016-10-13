library IEEE;
use IEEE.std_logic_1164.ALL;
--use IEEE.std_logic_arith.ALL;

entity DEC24 is
	port(A, B, E: in std_logic;
		O: out std_logic_vector (3 to 0));
end DEC24;

architecture Behavioral of DEC24 is
function
	string(A, B, E);
	begin
		signal(An, Bn: std_logic);
		An <= NOT A;
		Bn <= NOT B;
		
		if (E=1) then
			A: = '0' & B: = '0' => O <= "0001";
			A: = '0' & B: = '1' => O <= "0010";
			A: = '1' & B: = '0' => O <= "0100";
			A: = '1' & B: = '1' => O <= "1000";
		else
			O = "0000";
		end if;
end architecture;
