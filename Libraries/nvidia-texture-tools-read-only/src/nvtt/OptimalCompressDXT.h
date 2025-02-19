// Copyright NVIDIA Corporation 2008 -- Ignacio Castano <icastano@nvidia.com>
// 
// Permission is hereby granted, free of charge, to any person
// obtaining a copy of this software and associated documentation
// files (the "Software"), to deal in the Software without
// restriction, including without limitation the rights to use,
// copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following
// conditions:
// 
// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
// OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
// HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
// WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
// OTHER DEALINGS IN THE SOFTWARE.

#ifndef NV_TT_OPTIMALCOMPRESSDXT_H
#define NV_TT_OPTIMALCOMPRESSDXT_H

#include <nvimage/nvimage.h>

#include <nvmath/Color.h>

namespace nv
{
	struct ColorBlock;
	struct BlockDXT1;
	struct BlockDXT3;
	struct BlockDXT5;
	struct AlphaBlockDXT3;
	struct AlphaBlockDXT5;

	namespace OptimalCompress
	{
		void compressDXT1(Color32 rgba, BlockDXT1 * dxtBlock);
		void compressDXT1a(Color32 rgba, BlockDXT1 * dxtBlock);
		void compressDXT1G(uint8 g, BlockDXT1 * dxtBlock);
		
		void compressDXT1G(const ColorBlock & rgba, BlockDXT1 * block);
		void compressDXT3A(const ColorBlock & rgba, AlphaBlockDXT3 * dxtBlock);
		void compressDXT5A(const ColorBlock & rgba, AlphaBlockDXT5 * dxtBlock);
	}
} // nv namespace

#endif // NV_TT_OPTIMALCOMPRESSDXT_H
