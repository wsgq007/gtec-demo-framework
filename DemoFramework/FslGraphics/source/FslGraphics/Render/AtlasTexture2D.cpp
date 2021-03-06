/****************************************************************************************************************************************************
* Copyright (c) 2014 Freescale Semiconductor, Inc.
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
*    * Redistributions of source code must retain the above copyright notice,
*      this list of conditions and the following disclaimer.
*
*    * Redistributions in binary form must reproduce the above copyright notice,
*      this list of conditions and the following disclaimer in the documentation
*      and/or other materials provided with the distribution.
*
*    * Neither the name of the Freescale Semiconductor, Inc. nor the names of
*      its contributors may be used to endorse or promote products derived from
*      this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
* ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
* IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
* INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
* BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
* DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
* LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
* OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
* ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
****************************************************************************************************************************************************/

#include <FslGraphics/Render/AtlasTexture2D.hpp>
#include <FslBase/Exceptions.hpp>

namespace Fsl
{
  AtlasTexture2D::AtlasTexture2D()
    : m_atlas()
    , m_info()
  {
  }


  AtlasTexture2D::AtlasTexture2D(const Texture2D& texAtlas, const AtlasTextureInfo& info)
    : m_atlas(texAtlas)
    , m_info(info)
  {

  }


  AtlasTexture2D::~AtlasTexture2D()
  {
  }


  bool AtlasTexture2D::IsValid() const
  {
    return m_atlas.IsValid();
  }

  AtlasTextureInfo AtlasTexture2D::GetInfo() const
  {
    return m_info;
  }


  std::shared_ptr<INativeTexture2D> AtlasTexture2D::TryGetNative() const
  {
    return m_atlas.TryGetNative();
  }


  Texture2D AtlasTexture2D::GetAtlasTexture() const
  {
    return m_atlas;
  }


  void AtlasTexture2D::Reset()
  {
    m_atlas.Reset();
    m_info = AtlasTextureInfo();
  }


  void AtlasTexture2D::Reset(const Texture2D& texAtlas, const AtlasTextureInfo& info)
  {
    m_atlas = texAtlas;
    m_info = info;
  }

}
