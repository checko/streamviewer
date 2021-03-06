/*           StreamViewer - A free and open transport stream viewer           */
/* ========================================================================== */
/*    Copyright © 2009 - Paulo Flabiano Smorigo - Under GNU GPL v2 License    */
/* -------------------------------------------------------------------------- */
/**
 * @file    Decoder.h
 * @brief   The header of the decoder class.
 * @author  Paulo Flabiano Smorigo <pfsmorigo@gmail.com>
 * @date    Nov 23, 2009
 *
 * $Id$
 * $URL$
 *
 */

#ifndef DECODER_H_
#define DECODER_H_

#include "global.h"

#include <string>
#include <list>

using namespace std;

class Decoder
{
public:
	/**
	 * @brief The constructor.
	 */
	Decoder();

	/**
	 * @brief The destructor.
	 */
	virtual ~Decoder();

	/**
	 * @brief TBD
	 */
	void SetFile(string filename);

	/**
	 * @brief TBD
	 */
	list<Packet> GetNext(int number);

	/**
	 * @brief TBD
	 */
	void GoToPacket(int number);

	/**
	 * @brief TBD
	 */
	int GetTotalPacket();

	/**
	 * @brief TBD
	 */
	std::string GetPacketDescription(int pid);

private:

	/**
	 * @brief TBD
	 */
	string filename;
};

#endif /* DECODER_H_ */
